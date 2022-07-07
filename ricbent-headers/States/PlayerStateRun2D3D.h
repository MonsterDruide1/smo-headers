#pragma once

class PlayerStateRun2D3D
{
public:
    PlayerStateRun2D3D(al::LiveActor*, PlayerConst const*, IUseDimension const*, IPlayerModelChanger const*, PlayerInput const*, IUsePlayerCollision const*, PlayerAnimator*);
    appear();
    syncModel();
    exeRun3D();
    exeRun2D();
    ~PlayerStateRun2D3D();
};
