#pragma once

class DemoPlayer
{
public:
    DemoPlayer(char const*);
    forceSetCostumeAndCapType(char const*, char const*);
    init(al::ActorInitInfo const&);
    hairControl();
    initAfterCreateFromFactory(al::ActorInitInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const*, bool);
    makeActorAlive();
    control();
    startAction(int);
    resetDynamics();
};
