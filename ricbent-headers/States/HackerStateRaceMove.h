#pragma once

class HackerStateRaceMove
{
public:
    HackerStateRaceMove(al::LiveActor*, IUsePlayerHack**, char const*, char const*, char const*);
    appear();
    setLandNerve();
    isFalling() const;
    exeWait();
    exeMove();
    exeFall();
    ~HackerStateRaceMove();
};
