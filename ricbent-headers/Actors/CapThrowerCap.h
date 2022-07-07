#pragma once

class CapThrowerCap
{
public:
    CapThrowerCap(char const*, sead::Matrix34<float> const*, sead::Matrix34<float> const*);
    init(al::ActorInitInfo const&);
    kill();
    appear();
    control();
    appearOnHandWithOffset(sead::Vector3<float> const&, char const*);
    setBoundAttack();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    reverseEnd();
    attachHead();
    attachHandThrow(bool, sead::Vector3<float> const&);
    attachHandCatch(sead::Vector3<float> const&);
    attackStraight(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, int);
    attackCurve(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    calcNextCurevePurePos();
    isReturning() const;
    isReversing() const;
    isOnHead() const;
    exeAppear();
    exeAppearOnHand();
    exeOnHead();
    exeOnHand();
    exeCatch();
    exeAttackStraightStart();
    exeAttackStraightWait();
    exeAttackStraightReturn();
    exeAttackCurveStart();
    exeAttackCurveReturn();
    exeJump();
    exeReRotate();
    exeReverse();
    exeBoundAttack();
};
