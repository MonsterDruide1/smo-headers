#pragma once

class Koopa2D
{
public:
    Koopa2D(char const*);
    init(al::ActorInitInfo const&);
    appear2D(IUsePlayerHack*, ActorDimensionKeeper*);
    movement();
    control();
    kill();
    updateCollider();
    forcePopUp(sead::Vector3<float> const&);
    getDiskColliderDepth() const;
    exeWait();
    exeWaitFire();
    exeMove();
    exeBrake();
    exeJump();
    exeSeparateJump();
    exeSeparateJumpEnd();
    exePopUp();
    appear();
    getActorDimensionKeeper() const;
    getPlayerCollider() const;
};
