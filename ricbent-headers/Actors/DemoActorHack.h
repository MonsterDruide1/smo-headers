#pragma once

class DemoActorHack
{
public:
    DemoActorHack(char const*);
    init(al::ActorInitInfo const&);
    control();
    makeActorAlive();
    makeActorDead();
};
