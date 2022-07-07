#pragma once

class KoopaBattleFieldBarrier
{
public:
    createLinksBarrier(al::ActorInitInfo const&);
    KoopaBattleFieldBarrier(char const*);
    init(al::ActorInitInfo const&);
    makeActorAlive();
    makeActorDead();
    control();
    collide(sead::Vector3<float> const&);
};
