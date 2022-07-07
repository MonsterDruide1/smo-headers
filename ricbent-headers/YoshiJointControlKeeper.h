#pragma once

class YoshiJointControlKeeper
{
public:
    YoshiJointControlKeeper(al::LiveActor const*, IUsePlayerCollision const*);
    update();
    updateHeadCorrect();
    updateLookAt();
    updateGroundPose();
};
