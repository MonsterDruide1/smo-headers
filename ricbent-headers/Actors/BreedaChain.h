#pragma once

class BreedaChain
{
public:
    BreedaChain(char const*, char const*, char const*, float, float, bool);
    init(al::ActorInitInfo const&);
    setPrevChain(BreedaChain*);
    setNextChain(BreedaChain*);
    setDemoFollowMtxPtr(sead::Matrix34<float> const*);
    setFix();
    isUseCollider() const;
    addVelocityChain(sead::Vector3<float> const&);
    updateVelocity(BreedaChain*);
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
