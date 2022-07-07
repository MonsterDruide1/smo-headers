#pragma once

class ChairStateBindStandUp
{
public:
    ChairStateBindStandUp(al::LiveActor*, IUsePlayerPuppet**);
    appear();
    exeStandUp();
    ~ChairStateBindStandUp();
};
