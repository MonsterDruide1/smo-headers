#pragma once

class DemoActorShineTower
{
public:
    DemoActorShineTower(char const*);
    makeActorAlive();
    makeActorDead();
    control();
    init(al::ActorInitInfo const&);
};
