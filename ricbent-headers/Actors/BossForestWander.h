#pragma once

class BossForestWander
{
public:
    BossForestWander(char const*);
    init(al::ActorInitInfo const&);
    exeWaitSwitchStart();
    exeWait();
    exeMove();
    exeEnd();
};
