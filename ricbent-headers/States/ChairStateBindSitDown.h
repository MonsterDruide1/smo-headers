#pragma once

class ChairStateBindSitDown
{
public:
    ChairStateBindSitDown(al::LiveActor*, IUsePlayerPuppet**, char const*, char const*, char const*);
    appear();
    exeWaitPlayerLand();
    exeSitDownStart();
    exeSitDown();
    ~ChairStateBindSitDown();
};
