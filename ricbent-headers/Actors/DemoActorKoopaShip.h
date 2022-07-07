#pragma once

class DemoActorKoopaShip
{
public:
    DemoActorKoopaShip(char const*);
    init(al::ActorInitInfo const&);
    calcAnim();
    startAction(int);
};
