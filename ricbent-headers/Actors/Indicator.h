#pragma once

class Indicator
{
public:
    Indicator(char const*);
    init(al::ActorInitInfo const&);
    update();
    setLightLevel(int);
    setLightLevel(int, int);
    tryDecreaseLightLevel(int);
    exeWait();
};
