#pragma once

class RigidBodyShapeKeeper
{
public:
    RigidBodyShapeKeeper();
    init(al::ByamlIter const&);
    initByDataList(int, sead::Vector3<float> const*, float const*);
    update(sead::Quat<float> const&, sead::Vector3<float> const&);
    getForcePointNum() const;
    getForcePoint(int);
};
