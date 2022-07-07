#pragma once

class LaserAnim
{
public:
    setup(LaserAnim::LaserType, LaserAnim::LaserParam);
    start();
    forceStop();
    update();
    LaserAnim();
    updatePanType();
    updateLoopType();
};
