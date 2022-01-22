#include "animation_table.h"

const u16 anim_62_indices[] = {
    0x0001, 0x0000, 0x000A, 0x0001, 0x000A, 0x000B, 0x0001, 0x0000, 0x0001, 0x0015, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000A, 0x0169,
    0x000A, 0x014B, 0x000A, 0x0155, 0x000A, 0x015F,
    0x000A, 0x012D, 0x000A, 0x0137, 0x000A, 0x0141,
    0x0001, 0x0129, 0x0001, 0x012A, 0x0001, 0x012B,
    0x000A, 0x0035, 0x000A, 0x003F, 0x000A, 0x0049,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000A, 0x002B,
    0x000A, 0x0016, 0x000A, 0x0020, 0x0001, 0x002A,
    0x0001, 0x0112, 0x0001, 0x0113, 0x0001, 0x0114,
    0x000A, 0x0068, 0x000A, 0x0072, 0x000A, 0x007C,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000A, 0x005E,
    0x000A, 0x0053, 0x0001, 0x0000, 0x0001, 0x005D,
    0x0001, 0x0000, 0x000A, 0x0115, 0x000A, 0x011F,
    0x000A, 0x00F4, 0x000A, 0x00FE, 0x000A, 0x0108,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000A, 0x00EA,
    0x000A, 0x00CC, 0x000A, 0x00D6, 0x000A, 0x00E0,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x012C,
    0x000A, 0x00AE, 0x000A, 0x00B8, 0x000A, 0x00C2,
    0x0001, 0x0000, 0x0001, 0x0000, 0x000A, 0x00A4,
    0x000A, 0x0086, 0x000A, 0x0090, 0x000A, 0x009A
};

const s16 anim_62_values[] = {
    0x0000, 0x00AA, 0x00AC, 0x00AC, 0x00AB, 0x00AA, 0x00AB, 0x00AE,
    0x00B1, 0x00AF, 0x00B0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3FFF, 0x0000, 0xFC33,
    0xF7DC, 0xF33C, 0xEE95, 0xEA28, 0xE637, 0xE303, 0xE0CD, 0xDFD6,
    0xF97C, 0xFAC8, 0xFC44, 0xFDD9, 0xFF70, 0x00F2, 0x024B, 0x0363,
    0x0425, 0x0479, 0xED8C, 0xCA4F, 0xC887, 0xC67F, 0xC454, 0xC227,
    0xC014, 0xBE3C, 0xBCBB, 0xBBB2, 0xBB3F, 0xFB1D, 0xF9B5, 0xF81A,
    0xF664, 0xF4AB, 0xF308, 0xF193, 0xF064, 0xEF92, 0xEF37, 0xD2DC,
    0xD28B, 0xD22E, 0xD1CB, 0xD167, 0xD109, 0xD0B5, 0xD070, 0xD041,
    0xD02C, 0xD4B4, 0xD357, 0xD1C9, 0xD022, 0xCE77, 0xCCE2, 0xCB79,
    0xCA53, 0xC988, 0xC930, 0x0000, 0x00F6, 0x020F, 0x033B, 0x0468,
    0x0587, 0x0687, 0x0756, 0x07E6, 0x0824, 0xF549, 0xC7DD, 0xC7D1,
    0xC7C3, 0xC7B4, 0xC7A5, 0xC797, 0xC78A, 0xC780, 0xC778, 0xC775,
    0x054B, 0xFF7C, 0xF8D9, 0xF1C7, 0xEAAA, 0xE3E7, 0xDDE0, 0xD8FA,
    0xD598, 0xD41F, 0x2BD6, 0x2BA0, 0x2B63, 0x2B21, 0x2ADF, 0x2AA0,
    0x2A68, 0x2A3A, 0x2A1B, 0x2A0D, 0xCCF6, 0xC1C6, 0xB500, 0xA765,
    0x99B5, 0x8CB1, 0x8118, 0x77A7, 0x7126, 0x6E50, 0x0000, 0x0000,
    0x0000, 0x0000, 0xFFFF, 0x0000, 0x0008, 0x000E, 0x0000, 0x0000,
    0xFF30, 0xFF30, 0xFF30, 0xFF30, 0xFF28, 0xFF30, 0xFF59, 0xFF99,
    0x0000, 0x0000, 0xC9D8, 0xC9D8, 0xC9D8, 0xC9D8, 0xCA8B, 0xC9D8,
    0xC502, 0xC084, 0xC439, 0xC440, 0x1E4A, 0x1E4A, 0x1E4A, 0x1E4A,
    0x1CFC, 0x1E4A, 0x2850, 0x2FAE, 0x1E09, 0x1DE6, 0x1B09, 0x1B09,
    0x1B09, 0x1B09, 0x1BF5, 0x1B09, 0x15D3, 0x0EC0, 0x073F, 0x0730,
    0x1144, 0x1144, 0x1144, 0x1144, 0x118C, 0x1144, 0x1071, 0x0D8D,
    0x0348, 0x0334, 0xAC44, 0xAC44, 0xAC44, 0xAC44, 0xAD37, 0xAC44,
    0xA5D1, 0x9F9E, 0xA37D, 0xA384, 0x0000, 0x02A5, 0x03FE, 0x04E3,
    0x0535, 0x04E3, 0x0397, 0x0209, 0x00C8, 0x0005, 0x0000, 0x0000,
    0x0000, 0x0000, 0xFFFF, 0x0000, 0x000E, 0x001A, 0x000E, 0x0000,
    0xBF40, 0xBE85, 0xBE25, 0xBDE6, 0xBE35, 0xBDE6, 0xBB22, 0xB84D,
    0xB7A1, 0xB7C7, 0x2537, 0x2B69, 0x24ED, 0x1DDA, 0x1D01, 0x1DDA,
    0x1DDA, 0x1DDA, 0x1DDA, 0x1DDA, 0xD64A, 0xDEDD, 0xE193, 0xE2E6,
    0xE326, 0xE2E6, 0xE2E6, 0xE2E6, 0xE2E6, 0xE2E6, 0xEC41, 0xEED6,
    0xF503, 0xFA83, 0xFB3E, 0xFA83, 0xFA83, 0xFA83, 0xFA83, 0xFA83,
    0xB59E, 0xAA7E, 0xA988, 0xAA3E, 0xAA3A, 0xAA3E, 0xAA3E, 0xAA3E,
    0xAA3E, 0xAA3E, 0x8001, 0x8001, 0x4171, 0x0000, 0xFEBA, 0xFE14,
    0xFDA6, 0xFD94, 0xFDA6, 0xFDA6, 0xFDA6, 0xFDA6, 0xFDA6, 0xBF5F,
    0xC310, 0xC4F1, 0xC630, 0xC662, 0xC630, 0xC630, 0xC630, 0xC630,
    0xC630, 0x8001, 0x8001, 0x4171, 0xBF5F, 0x0000, 0x0268, 0x0528,
    0x0815, 0x0B07, 0x0DD5, 0x1054, 0x125B, 0x13C2, 0x145E, 0x0000,
    0xFF4A, 0xFE79, 0xFD9B, 0xFCBB, 0xFBE7, 0xFB29, 0xFA8F, 0xFA25,
    0xF9F6, 0xFC62, 0xFE06, 0xFFE5, 0x01E3, 0x03E4, 0x05CD, 0x0780,
    0x08E2, 0x09D6, 0x0A41, 0x0000, 0x01B3, 0x03A4, 0x05B5, 0x07C9,
    0x09C4, 0x0B87, 0x0CF6, 0x0DF3, 0x0E61, 0x0000, 0xFF32, 0xFE46,
    0xFD4A, 0xFC4D, 0xFB5C, 0xFA86, 0xF9D8, 0xF95F, 0xF92B, 0x0884,
    0x0AB8, 0x0D3D, 0x0FEB, 0x129E, 0x152E, 0x1778, 0x1953, 0x1A9C,
    0x1B2A, 0x40A1, 0x41BF, 0x4306, 0x4462, 0x45C1, 0x470E, 0x4837,
    0x4928, 0x49CE, 0x4A17
};

const struct Animation anim_62[] = {
    1,
    189,
    0,
    0,
    0x0A,
    ANIMINDEX_NUMPARTS(anim_62_indices),
    anim_62_values,
    anim_62_indices,
    0
};
