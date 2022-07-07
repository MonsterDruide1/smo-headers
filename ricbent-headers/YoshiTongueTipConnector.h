#pragma once

class YoshiTongueTipConnector
{
public:
    YoshiTongueTipConnector(al::LiveActor const*);
    reset();
    attachCollision(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    tryCalcConnect(sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*);
};
