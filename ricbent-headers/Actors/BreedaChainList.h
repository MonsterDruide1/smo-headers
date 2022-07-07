#pragma once

class BreedaChainList
{
public:
    BreedaChainList(char const*, char const*, int, float, float, bool);
    makeActorAlive();
    makeActorDead();
    setRootPosPtr(sead::Vector3<float> const*);
    setTipPosPtr(sead::Vector3<float> const*);
    calcRootAndTipPos(sead::Vector3<float>*, sead::Vector3<float>*);
    getChain(int);
    registerHostSubActorSyncClipping(al::LiveActor*);
    init(al::ActorInitInfo const&);
    resetChain();
    resetChain(sead::Vector3<float> const&, sead::Vector3<float> const&);
    startBlowDown();
    active();
    deactive();
    setUpDemo();
    reset();
    exeDemo();
    exeDeactive();
    exeWait();
    exeBlowDown();
};
