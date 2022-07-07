#pragma once

class HackMapPartsStateKeyMove
{
public:
    HackMapPartsStateKeyMove(al::LiveActor*, al::KeyPoseKeeper*, IUsePlayerHack**, bool, bool, bool, float, float, bool);
    appear();
    kill();
    isStopped() const;
    isWaitInput() const;
    exeMove();
    calcMoveRate() const;
    isInNoStopRange();
    checkInput();
    exeWait();
    exeWaitInput();
    ~HackMapPartsStateKeyMove();
};
