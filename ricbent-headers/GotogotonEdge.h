#pragma once

class GotogotonEdge
{
public:
    GotogotonEdge();
    setTrans(sead::Vector3<float> const&);
    setAxis(sead::Vector3<float> const&);
    setNextFace(GotogotonFace const*);
    calcAxisAndPos(sead::Vector3<float>*, sead::Vector3<float>*, sead::Quat<float> const&, sead::Vector3<float> const&) const;
};
