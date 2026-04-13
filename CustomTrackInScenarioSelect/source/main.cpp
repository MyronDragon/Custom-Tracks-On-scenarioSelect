#include "syati.h"

void playScenarioSelectBGM(const char* scenario, bool flag) {
    int starNum = MR::getPowerStarNum();

    if (starNum <= 20) {
        MR::startSubBGM("STM_SMG2_GALAXY_08", false);
    }
    else if (starNum <= 40) {
        MR::startSubBGM("STM_SMG2_GALAXY_25", false);
    }
    else if (starNum <= 60) {
        MR::startSubBGM("STM_TITLE", false);
    }
    else if (starNum <= 80) {
        MR::startSubBGM("STM_SMG2_BOSS08B", false);
    }
    else if (starNum <= 100) {
        MR::startSubBGM("STM_SMG2_BOSS_01B", false);
    }
    else if (starNum <= 120) {
        MR::startSubBGM("STM_SMG2_BOSS_03B", false);
    }
    else if (starNum <= 140) {
        MR::startSubBGM("STM_SMG2_BOSS_02B", false);
    }
    else if (starNum >= 140) {
        MR::startSubBGM("STM_SMG2_BOSS10", false);
    }
}

kmCall(0x8048ED4C, playScenarioSelectBGM);

/*
void playScenarioSelectBGM (const char *, bool) {
    MR::startSubBGM("STM_SMG2_GALAXY_08", false);
}
kmCall(0x8048ED4C, playScenarioSelectBGM);*/