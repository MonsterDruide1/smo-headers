#pragma once

class BossRaidChain
{
public:
    BossRaidChain(char const*, char const*, char const*, float, float);
    init(al::ActorInitInfo const&);
    setPrevChain(BossRaidChain*);
    setNextChain(BossRaidChain*);
    setDemoFollowMtxPtr(sead::Matrix34<float> const*);
    setFix();
    addVelocityChain(sead::Vector3<float> const&);
    updateVelocity(BossRaidChain*);
    updateDirection(float, float);
    resetDirection();
    startBlowDown();
    active();
    deactive();
    setUpDemo();
    reset();
    exeDeactive();
    exeDemo();
    exeWait();
    exeBlowDown();
};
