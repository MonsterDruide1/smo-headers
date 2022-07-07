#pragma once

class CollisionShapeInfoSphere
{
public:
    CollisionShapeInfoSphere(char const*, float, sead::Vector3<float> const&);
    calcWorldShapeInfo(sead::Matrix34<float> const&, float);
    calcRelativeShapeInfo(sead::Matrix34<float> const&);
    getBoundingCenter() const;
    getBoundingCenterWorld() const;
    getBoundingRadius() const;
    getBoundingRadiusWorld() const;
    getCheckStepRange() const;
    getCheckStepRangeWorld() const;
    updateShapeOffset(sead::Vector3<float> const&);
};
