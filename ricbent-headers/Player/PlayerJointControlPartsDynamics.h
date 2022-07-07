#pragma once

class PlayerJointControlPartsDynamics
{
public:
    PlayerJointControlPartsDynamics(al::LiveActor const*, PlayerConst const*, bool, bool, bool, int);
    createFollowJawJointController(al::LiveActor const*, sead::Matrix34<float> const*);
    update(float, float);
    invalidateCapDynamics();
    resetDynamics();
};
