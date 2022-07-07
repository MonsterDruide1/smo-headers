#pragma once

class ShineTowerLight
{
public:
    ShineTowerLight(al::LiveActor*, sead::Matrix34<float> const*);
    update(bool, float);
};
