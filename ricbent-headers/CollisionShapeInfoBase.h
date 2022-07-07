#pragma once

class CollisionShapeInfoBase
{
public:
    CollisionShapeInfoBase(CollisionShapeId, char const*);
    getBoundingCenter() const;
    getBoundingCenterWorld() const;
    getBoundingRadius() const;
    getBoundingRadiusWorld() const;
    getCheckStepRange() const;
    getCheckStepRangeWorld() const;
    updateShapeOffset(sead::Vector3<float> const&);
    calcWorldShapeInfo(sead::Matrix34<float> const&, float);
    calcRelativeShapeInfo(sead::Matrix34<float> const&);
};
