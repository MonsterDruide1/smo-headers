#pragma once

class KoopaHackPartsMtxCtrl
{
public:
    KoopaHackPartsMtxCtrl(al::LiveActor const*);
    calcAnimPost();
    startFall();
    startJump();
    endJump();
    tryCancel();
    exeMove();
    exeFallDelay();
    exeFallStart();
    exeJumpStart();
    exeJump();
    exeJumpEnd();
    ~KoopaHackPartsMtxCtrl();
};
