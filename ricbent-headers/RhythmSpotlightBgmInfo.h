#pragma once

class RhythmSpotlightBgmInfo
{
public:
    RhythmSpotlightBgmInfo(al::LiveActor*, unsigned char const*, int);
    initAnimInfo(unsigned char const*, int);
    createStrobeAnim();
    createLaserAnim();
    setupLaserAnim(LaserAnim::LaserType, LaserAnim::LaserParam);
    setupStrobeAnim(StrobeAnim::StrobeParam);
    startLaserAnim();
    stopLaserAnim();
    startStrobeAnim();
    stopStrobeAnim();
    update();
    isLooping();
    resetInfo(float);
    checkCurAnimInfo(RhythmSpotlightBgmInfo::AnimType);
    setDefaultLaserAnim(LaserAnim::LaserParam*, LaserAnim::LaserType);
};
