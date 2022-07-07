#pragma once

class RouletteSwitch
{
public:
    RouletteSwitch(char const*);
    init(al::ActorInitInfo const&);
    control();
    exeWait();
};
