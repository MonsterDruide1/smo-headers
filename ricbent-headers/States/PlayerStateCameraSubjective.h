#pragma once

class PlayerStateCameraSubjective
{
public:
    PlayerStateCameraSubjective(al::LiveActor*, al::CameraTicket*, IPlayerModelChanger*, PlayerCarryKeeper*, PlayerAnimator*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*);
    appear();
    kill();
    control();
    interruptByDemo();
    isStateActiveCamera() const;
    exeStart();
    faceToCameraDir();
    exeWait();
    exeEnd();
    ~PlayerStateCameraSubjective();
};
