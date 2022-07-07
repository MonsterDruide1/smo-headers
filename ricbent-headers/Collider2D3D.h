#pragma once

class Collider2D3D
{
public:
    Collider2D3D(al::Collider*, ColliderDisk*);
    collide(sead::Vector3<float>*, sead::Vector3<float> const&);
    on2D();
    off2D();
    onInvalidate();
    getHalfThickness2D() const;
    isCollidedGround() const;
    isCollidedWall() const;
    isCollidedCeiling() const;
    getGroundInfo() const;
    getWallInfo() const;
    getCeilingInfo() const;
};
