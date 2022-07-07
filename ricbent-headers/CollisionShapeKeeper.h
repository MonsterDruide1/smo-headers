#pragma once

class CollisionShapeKeeper
{
public:
    CollisionShapeKeeper(int, int, int);
    createShapeArrow(char const*, sead::Vector3<float> const&, sead::Vector3<float> const&, float, int);
    createShapeSphere(char const*, float, sead::Vector3<float> const&);
    createShapeSphereSupportGround(char const*, float, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    createShapeSphereIgnoreGround(char const*, float, sead::Vector3<float> const&);
    createShapeDisk(char const*, float, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    createShapeDiskSupportGround(char const*, float, sead::Vector3<float> const&, sead::Vector3<float> const&, float, sead::Vector3<float> const&, float);
    createShapeDiskIgnoreGround(char const*, float, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    updateShape();
    clearResult();
    calcWorldShapeInfo(sead::Matrix34<float> const&, float);
    calcRelativeShapeInfo(sead::Matrix34<float> const&);
    registerCollideResult(CollidedShapeResult const&);
    registerCollideSupportResult(CollidedShapeResult const&);
    isCollidedResultFull() const;
    isCollidedSupportResultFull() const;
    isShapeArrow(int) const;
    isShapeSphere(int) const;
    isShapeDisk(int) const;
    getShapeInfoBase(int) const;
    getShapeInfoArrow(int) const;
    getShapeInfoSphere(int) const;
    getShapeInfoDisk(int) const;
    findShapeInfoIndex(char const*) const;
    getCollidedShapeResult(int) const;
    getCollidedShapeSupportResult(int) const;
};
