#pragma once

class PulseSwitch
{
public:
    PulseSwitch(char const*);
    init(al::ActorInitInfo const&);
    on();
    exeStandby();
    exeOn();
    exeOff();
};
