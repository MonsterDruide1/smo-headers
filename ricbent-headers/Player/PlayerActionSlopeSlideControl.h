#pragma once

class PlayerActionSlopeSlideControl
{
public:
    PlayerActionSlopeSlideControl(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*);
    setup();
    setupCutSlideOppositeDir();
    update(float, float, float, float, float, float, float, float, float, float, bool);
};
