#pragma once

class SwitchAnd
{
public:
    SwitchAnd(char const*);
    init(al::ActorInitInfo const&);
    notifyInputSwitchOn();
    notifyInputSwitchOff();
};
