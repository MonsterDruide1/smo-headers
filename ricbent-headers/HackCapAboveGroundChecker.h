#pragma once

class HackCapAboveGroundChecker
{
public:
    HackCapAboveGroundChecker(al::LiveActor const*);
    update(sead::Vector3<float> const&);
};
