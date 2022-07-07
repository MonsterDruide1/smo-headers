#pragma once

class DemoActorCapManHero
{
public:
    DemoActorCapManHero(char const*);
    init(al::ActorInitInfo const&);
    initAfterCreateFromFactory(al::ActorInitInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const*, bool);
    makeActorAlive();
    control();
    startAction(int);
};
