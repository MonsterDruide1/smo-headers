#pragma once

class HackMapPartsStateFreeMove
{
public:
    HackMapPartsStateFreeMove(al::LiveActor*, IUsePlayerHack**);
    appear();
    kill();
    isStopped() const;
    isWaitInput() const;
    exeMove();
    exeWaitInput();
    ~HackMapPartsStateFreeMove();
};
