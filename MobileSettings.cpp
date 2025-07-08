//
// Created by traw-GG on 29.04.2024.
//

#include "MobileSettings.h"

void CMobileSettings::InjectHooks() {
    CHook::Write(g_libGTASA + (VER_x32 ? 0x00679A3C : 0x851498), &ms_MobileSettings);
}