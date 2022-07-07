#pragma once

class StageSwitchSelector
{
public:
    StageSwitchSelector(char const*);
    init(al::ActorInitInfo const&);
    exeWaitStatUp();
    exeWaitStartSwitching();
    exeWaitDelaySwitching();
};
