#pragma once

class PlayerColliderHackCap
{
public:
    PlayerColliderHackCap(al::LiveActor*);
    init();
    updateCollider(sead::Vector3<float> const&);
    getColliderRadius() const;
    getPlayerCollider() const;
};
