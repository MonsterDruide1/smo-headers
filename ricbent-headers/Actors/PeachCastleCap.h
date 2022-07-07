#pragma once

class PeachCastleCap
{
public:
    PeachCastleCap(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    control();
    startClipped();
    exeWait();
    exeDemoStart();
    exeDemo();
    exeDemoAfter();
};
