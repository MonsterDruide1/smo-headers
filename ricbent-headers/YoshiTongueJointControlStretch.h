#pragma once

class YoshiTongueJointControlStretch
{
public:
    YoshiTongueJointControlStretch(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    calcBoundingBox(sead::BoundBox3<float>*) const;
    getCtrlTypeName() const;
};
