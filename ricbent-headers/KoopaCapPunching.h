#pragma once

class KoopaCapPunching
{
public:
    KoopaCapPunching(al::ActorInitInfo const&);
    start(IUsePlayerPuppet*, sead::Vector3<float> const&);
    update();
    isDead() const;
    exeAppear();
    exeJump();
    exePunchWait();
    exePunch();
    exePunchEnd();
    exeDead();
    ~KoopaCapPunching();
};
