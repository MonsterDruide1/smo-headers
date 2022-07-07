#pragma once

class CollidedShapeResult
{
public:
    CollidedShapeResult(CollisionShapeInfoBase const*);
    setArrowHitInfo(al::ArrowHitInfo const&);
    setSphereHitInfo(al::SphereHitInfo const&);
    setDiskHitInfo(al::DiskHitInfo const&);
    isArrow() const;
    isSphere() const;
    isDisk() const;
    getArrowHitInfo() const;
    getSphereHitInfo() const;
    getDiskHitInfo() const;
    getShapeInfoArrow() const;
    getShapeInfoSphere() const;
    getShapeInfoDisk() const;
    operator=(CollidedShapeResult const&);
};
