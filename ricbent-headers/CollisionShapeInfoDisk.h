#pragma once

class CollisionShapeInfoDisk
{
public:
    CollisionShapeInfoDisk(char const*, float, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    updateDiskShape(float, sead::Vector3<float> const&, float);
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
