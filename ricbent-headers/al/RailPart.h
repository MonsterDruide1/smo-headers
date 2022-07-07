#pragma once

namespace al { 

class RailPart
{
public:
    RailPart();
    init(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    calcPos(sead::Vector3<float>*, float) const;
    calcVelocity(sead::Vector3<float>*, float) const;
    calcDir(sead::Vector3<float>*, float) const;
    calcStartPos(sead::Vector3<float>*) const;
    calcEndPos(sead::Vector3<float>*) const;
    calcLength(float, float, int) const;
    calcCurveParam(float) const;
    calcNearestParam(sead::Vector3<float> const&, float) const;
    calcNearestPos(sead::Vector3<float>*, sead::Vector3<float> const&, float) const;
    calcNearestLength(float*, sead::Vector3<float> const&, float, float) const;
    getPartLength() const;
};

} 
