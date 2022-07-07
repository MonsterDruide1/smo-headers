#pragma once

class YoshiStateHackJump
{
public:
    YoshiStateHackJump(al::LiveActor*, IUsePlayerHack**, PlayerConst const*, IUsePlayerCollision const*, PlayerTrigger const*, PlayerJumpMessageRequest const*, PlayerAnimator*);
    appear();
    isJumpTurn() const;
    exeJump();
    exeJumpTurn();
    ~YoshiStateHackJump();
};
