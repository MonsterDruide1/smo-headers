#pragma once

class PlayerJointControlGrabDynamics
{
public:
    PlayerJointControlGrabDynamics(al::LiveActor const*, PlayerConst const*);
    update(float, float);
};
