#pragma once

namespace al { 

class Rail
{
public:
    Rail();
    init(al::PlacementInfo const&);
    calcPos(sead::Vector3<float>*, float) const;
    getIncludedSection(al::RailPart const**, float*, float) const;
    calcDirection(sead::Vector3<float>*, float) const;
    calcPosDir(sead::Vector3<float>*, sead::Vector3<float>*, float) const;
    getTotalLength() const;
    getPartLength(int) const;
    getLengthToPoint(int) const;
    calcRailPointPos(sead::Vector3<float>*, int) const;
    calcNearestRailPointPosFast(sead::Vector3<float>*, unsigned int*, sead::Vector3<float> const&) const;
    calcNearestRailPointNo(int*, sead::Vector3<float> const&) const;
    calcNearestRailPointPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    normalizeLength(float) const;
    calcNearestRailPosCoord(sead::Vector3<float> const&, float) const;
    calcNearestRailPosCoord(sead::Vector3<float> const&, float, float*) const;
    calcNearestRailPos(sead::Vector3<float>*, sead::Vector3<float> const&, float) const;
    isNearRailPoint(float, float) const;
    calcRailPointNum(float, float) const;
    getIncludedSectionLength(float*, float*, float) const;
    getIncludedSectionIndex(float) const;
    isIncludeBezierRailPart() const;
    isBezierRailPart(int) const;
};

} 
