#pragma once

class PlayerWallActionHistory
{
public:
    PlayerWallActionHistory();
    update(IUsePlayerCollision const*);
    reset();
    recordWallJump(IUsePlayerCollision const*, sead::Vector3<float> const&);
    recordWallJump(sead::Vector3<float> const&, sead::Vector3<float> const&);
    recordWallLeave(sead::Vector3<float> const&, sead::Vector3<float> const&);
};
