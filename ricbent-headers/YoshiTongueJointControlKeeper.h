#pragma once

class YoshiTongueJointControlKeeper
{
public:
    YoshiTongueJointControlKeeper(al::LiveActor const*, al::LiveActor const*);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    calcTongueBoundingBox(sead::BoundBox3<float>*) const;
};
