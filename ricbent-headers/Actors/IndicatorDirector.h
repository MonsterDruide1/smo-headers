#pragma once

class IndicatorDirector
{
public:
    IndicatorDirector(char const*);
    init(al::ActorInitInfo const&);
    control();
    exeWaitSync();
    tryChangeState();
    exeLight();
    exeTurnOff();
};
