#pragma once

class BoidController
{
public:
    BoidController(al::LiveActor*);
    add(al::LiveActor*);
    clear();
    calcSeparate(sead::Vector3<float>*) const;
    calcAlign(sead::Vector3<float>*) const;
    calcCohesion(sead::Vector3<float>*) const;
    calcSeek(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};
