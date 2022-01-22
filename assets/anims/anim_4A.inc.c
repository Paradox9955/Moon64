#include "animation_table.h"

const u16 anim_4A_indices[] = {
    0x0008, 0x0001, 0x0008, 0x0009, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0011, 0x0001, 0x0000,
    0x0008, 0x011C, 0x0008, 0x0124, 0x0008, 0x012C,
    0x0008, 0x0104, 0x0008, 0x010C, 0x0008, 0x0114,
    0x0008, 0x00EC, 0x0008, 0x00F4, 0x0008, 0x00FC,
    0x0001, 0x00E8, 0x0001, 0x00E9, 0x0001, 0x00EA,
    0x0008, 0x0032, 0x0008, 0x003A, 0x0008, 0x0042,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0008, 0x002A,
    0x0008, 0x0012, 0x0008, 0x001A, 0x0008, 0x0022,
    0x0001, 0x00E4, 0x0001, 0x00E5, 0x0001, 0x00E6,
    0x0008, 0x006A, 0x0001, 0x0072, 0x0001, 0x0073,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0008, 0x0062,
    0x0008, 0x004A, 0x0008, 0x0052, 0x0008, 0x005A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x00E7,
    0x0008, 0x00CC, 0x0008, 0x00D4, 0x0008, 0x00DC,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0008, 0x00C4,
    0x0008, 0x00AC, 0x0008, 0x00B4, 0x0008, 0x00BC,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x00EB,
    0x0008, 0x0094, 0x0008, 0x009C, 0x0008, 0x00A4,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0008, 0x008C,
    0x0008, 0x0074, 0x0008, 0x007C, 0x0008, 0x0084
};

const s16 anim_4A_values[] = {
    0x0000, 0x0000, 0x0000, 0x0003, 0x0006, 0x000A, 0x000E, 0x0011,
    0x0013, 0x00AC, 0x00AB, 0x00A7, 0x00A1, 0x009B, 0x0095, 0x0090,
    0x008C, 0x3FFF, 0xE441, 0xE4DD, 0xE678, 0xE8B8, 0xEB47, 0xEDCC,
    0xEFEF, 0xF159, 0xF273, 0xF1D0, 0xF022, 0xEDC7, 0xEB1A, 0xE877,
    0xE63B, 0xE4C0, 0xFBD8, 0xFAA0, 0xF76B, 0xF2EA, 0xEDCD, 0xE8C3,
    0xE47D, 0xE1AA, 0xE392, 0xE3C3, 0xE442, 0xE4F6, 0xE5C1, 0xE68A,
    0xE734, 0xE7A5, 0xD5A2, 0xD6F2, 0xDA64, 0xDF3C, 0xE4BC, 0xEA27,
    0xEEC0, 0xF1C9, 0xEA6D, 0xEA33, 0xE99B, 0xE8C6, 0xE7D4, 0xE6E5,
    0xE61A, 0xE595, 0xE897, 0xE803, 0xE67C, 0xE458, 0xE1E9, 0xDF84,
    0xDD7B, 0xDC23, 0x13E1, 0x13DB, 0x13CC, 0x13B7, 0x139F, 0x1387,
    0x1372, 0x1365, 0x08D0, 0x0853, 0x070A, 0x053C, 0x0330, 0x012C,
    0xFF76, 0xFE55, 0xF6A5, 0xF664, 0xF5B8, 0xF4C6, 0xF3B4, 0xF2A6,
    0xF1C1, 0xF129, 0xE501, 0xE448, 0xE262, 0xDFB9, 0xDCB3, 0xD9B8,
    0xD731, 0xD585, 0x87F6, 0x88A5, 0x8A71, 0x8CF7, 0x8FD4, 0x92A7,
    0x950C, 0x96A1, 0x5359, 0x4901, 0x26DE, 0x2652, 0x24E3, 0x22DE,
    0x2094, 0x1E52, 0x1C68, 0x1B24, 0x0E76, 0x0E18, 0x0D22, 0x0BC8,
    0x0A3F, 0x08BC, 0x0774, 0x069B, 0xC8E8, 0xC99D, 0xCB78, 0xCE14,
    0xD10A, 0xD3F5, 0xD66F, 0xD812, 0x28E1, 0x29E8, 0x2C9A, 0x3063,
    0x34AF, 0x38EA, 0x3C82, 0x3EE2, 0x160C, 0x1504, 0x124E, 0x0E80,
    0x0A2D, 0x05EB, 0x024F, 0xFFEC, 0x0C9B, 0x0C85, 0x0C4D, 0x0BFF,
    0x0BA6, 0x0B4E, 0x0B04, 0x0AD3, 0xAE77, 0xACFD, 0xA91D, 0xA3AC,
    0x9D7D, 0x9767, 0x923C, 0x8ED2, 0xDECF, 0xDED3, 0xDEDF, 0xDEF0,
    0xDF03, 0xDF16, 0xDF26, 0xDF30, 0xF348, 0xF33A, 0xF315, 0xF2E1,
    0xF2A6, 0xF26C, 0xF23B, 0xF21A, 0xC276, 0xC268, 0xC243, 0xC20F,
    0xC1D3, 0xC199, 0xC167, 0xC147, 0x3B81, 0x3CB3, 0x3FD8, 0x4442,
    0x4946, 0x4E36, 0x5267, 0x552C, 0x0F41, 0x0EF4, 0x0E2B, 0x0D10,
    0x0BCF, 0x0A93, 0x0986, 0x08D5, 0x027B, 0x01F2, 0x0089, 0xFE8F,
    0xFC4F, 0xFA18, 0xF837, 0xF6F9, 0x97AD, 0x96E1, 0x94CB, 0x91DC,
    0x8E87, 0x8B3E, 0x8876, 0x869F, 0x8001, 0x8001, 0x4171, 0xBF5F,
    0x8001, 0x8001, 0x4171, 0xBF5F, 0x12F7, 0x12F1, 0x12E1, 0x12CC,
    0x12B3, 0x129B, 0x1286, 0x1278, 0xFEE7, 0xFF05, 0xFF54, 0xFFC3,
    0x0040, 0x00BC, 0x0125, 0x016A, 0x05CC, 0x0405, 0xFF59, 0xF8C9,
    0xF154, 0xE9FC, 0xE3C1, 0xDFA3, 0x1510, 0x14E6, 0x1477, 0x13DB,
    0x132A, 0x127C, 0x11E8, 0x1186, 0xF6F7, 0xF60D, 0xF3A5, 0xF044,
    0xEC6E, 0xE8A6, 0xE571, 0xE353, 0xFE90, 0x0018, 0x0421, 0x09CC,
    0x103B, 0x1692, 0x1BF3, 0x1F81, 0xD96B, 0xD8C3, 0xD70C, 0xD4A2,
    0xD1E4, 0xCF31, 0xCCE7, 0xCB63, 0x06DD, 0x06ED, 0x0717, 0x0752,
    0x0795, 0x07D7, 0x080F, 0x0834, 0x4534, 0x4515, 0x44C3, 0x4450,
    0x43CE, 0x434E, 0x42E1, 0x4299
};

const struct Animation anim_4A[] = {
    1,
    189,
    0,
    0,
    0x08,
    ANIMINDEX_NUMPARTS(anim_4A_indices),
    anim_4A_values,
    anim_4A_indices,
    0
};
