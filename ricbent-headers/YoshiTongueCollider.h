#pragma once

class YoshiTongueCollider
{
public:
    YoshiTongueCollider(al::LiveActor*);
    collide(sead::Vector3<float> const&, sead::Vector3<float> const&);
    resetCollision(sead::Vector3<float> const&);
    getPlayerCollider() const;
};
