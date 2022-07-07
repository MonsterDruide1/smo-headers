#pragma once

class CollisionShapeInfoArrow
{
public:
    CollisionShapeInfoArrow(char const*, sead::Vector3<float> const&, sead::Vector3<float> const&, float, int);
    updateShapeOffset(sead::Vector3<float> const&);
    calcWorldShapeInfo(sead::Matrix34<float> const&, float);
    calcRelativeShapeInfo(sead::Matrix34<float> const&);
    getBoundingCenter() const;
    getBoundingCenterWorld() const;
    getBoundingRadius() const;
    getBoundingRadiusWorld() const;
    getCheckStepRange() const;
    getCheckStepRangeWorld() const;
};
