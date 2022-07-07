#pragma once

class PlayerStateSandSink
{
public:
    PlayerStateSandSink(al::LiveActor*, PlayerConst const*, PlayerInput const*, PlayerTrigger const*, IUsePlayerCollision*, PlayerAnimator*, IJudge*, PlayerJudgePreInputJump*);
    appear();
    kill();
    setSandSinkDead();
    isJump() const;
    isDeadStatus() const;
    exeWait();
    exePivot();
    exeRun();
    exeJump();
    exeDead();
    ~PlayerStateSandSink();
};
