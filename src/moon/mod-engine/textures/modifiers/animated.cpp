#include "animated.h"
#include "moon/mod-engine/hooks/hook.h"
#include <sys/time.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>

using json = nlohmann::json;
using namespace std;

map<string, AnimatedEntry*> textures;

long long getMilliseconds(){
    struct timeval te;
    gettimeofday(&te, NULL);
    return te.tv_sec * 1000LL + te.tv_usec / 1000;
}

void AnimatedModifier::onInit(){
    Moon::registerHookListener({.hookName = TEXTURE_BIND, .callback = [](HookCall call){
        char* *hookTexture = reinterpret_cast<char**>(call.baseArgs["texture"]);
        string texName = string(*hookTexture);
        if(textures.find(texName) != textures.end()){
            AnimatedEntry* entry = textures[texName];
            Frame *frame = entry->frames[entry->lastFrame];

            if(getMilliseconds() >= entry->lastTime + frame->delay){
                int maxFrames = entry->frames.size() - 1;
                bool reachMax = (entry->lastFrame < maxFrames);
                if(entry->bounce){
                    if(entry->lastFrame >= maxFrames)
                        entry->lastBounce = true;
                    else if(entry->lastFrame <= 0)
                        entry->lastBounce = false;
                }

                entry->lastFrame += entry->bounce ? entry->lastBounce ? -1 : 1 : (reachMax ? 1 : -entry->lastFrame);
                entry->lastTime = getMilliseconds();
                frame = entry->frames[entry->lastFrame];
            }

            (*hookTexture) = const_cast<char*>(frame->path.c_str());
        }
        return false;
    }});
}

void AnimatedModifier::onLoad(std::string texture, json data){
    if(textures.find(texture) == textures.end()){
        if(!(data.contains("frames") && data.contains("delay") && data.contains("bounce"))) return;
        cout << "Found animated entry: " << texture << " with " << data["frames"].size() << " length" << endl;
        AnimatedEntry *entry = new AnimatedEntry();
        entry->advancedMode = data.contains("advancedMode") ? (bool) data["advancedMode"] : false;

        entry->bounce = data["bounce"];
        for(auto &frame : data["frames"]){
            if(!entry->advancedMode)
                entry->frames.push_back( new Frame({.delay = data["delay"], .path = frame}));
            else
                entry->frames.push_back( new Frame({.delay = frame["delay"], .path = frame["path"]}));
        }
        textures[texture] = entry;
    }
}

std::string AnimatedModifier::getKey(){
    return "animated";
}