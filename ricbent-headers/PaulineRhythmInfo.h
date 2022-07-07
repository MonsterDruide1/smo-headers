#pragma once

class PaulineRhythmInfo
{
public:
    PaulineRhythmInfo(al::LiveActor*, unsigned char const*, unsigned char const*, unsigned char const*, unsigned char const*, unsigned char const*);
    initAnimInfo(unsigned char const*, unsigned char const*, unsigned char const*, unsigned char const*, unsigned char const*);
    update(bool);
    isLooping();
    resetRhythmInfo(float);
    updateDance();
    updateReSing();
    updateLipSync();
    updateFace();
    updateEyeline();
    getDanceAnimId(int);
    getDanceBeat(int);
};
