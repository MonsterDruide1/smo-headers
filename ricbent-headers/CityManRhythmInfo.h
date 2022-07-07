#pragma once

class CityManRhythmInfo
{
public:
    CityManRhythmInfo(al::LiveActor*, unsigned char const*, bool, float);
    initAnimInfo(unsigned char const*);
    update(bool);
    isLooping();
    resetRhythmInfo(float);
    updateAnim();
    checkSameBeatAnimInfo(CityManRhythmInfo::CurAnimInfo&, int);
    getAnimId(int);
    getAnimBeat(int);
};
