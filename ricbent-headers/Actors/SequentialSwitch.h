#pragma once

class SequentialSwitch
{
public:
    SequentialSwitch(char const*);
    init(al::ActorInitInfo const&);
    notifyInputSwitchOn();
};
