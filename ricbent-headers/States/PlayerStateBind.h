#pragma once

class PlayerStateBind
{
public:
    PlayerStateBind(al::LiveActor*, PlayerConst const*, PlayerInput const*, PlayerPuppet const*, IUsePlayerCollision const*, PlayerTrigger*);
    appear();
    endBind();
    exeBind();
    exeEndOnGround();
    exeEndJump();
    exeEndCapThrow();
    exeEndFall();
    isEndOnGround() const;
    isEndAir() const;
    isEndCapThrow() const;
    isInvalidInput() const;
    ~PlayerStateBind();
};
