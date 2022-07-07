#pragma once

class CapThrowerStateCapThrow
{
public:
    CapThrowerStateCapThrow(al::LiveActor*, CapThrowerCap*, CapThrowerCap*, int, bool);
    appear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isPanic() const;
    exeThrowStart();
    isThrowCurve();
    throw11();
    throw12();
    throw13();
    throw21();
    throw22();
    throw23();
    exeThrowEnd();
    exeAttackWait();
    tryCatchAndChangeAttackEnd();
    exeCatch();
    exePanic();
    exePanicEnd();
    exeReset();
    throwStraight(CapThrowerCap*, bool);
    throwCurve(CapThrowerCap*, bool);
    throwStraightGapDegree(CapThrowerCap*, bool, float);
    throwCurveGapVec(CapThrowerCap*, bool, sead::Vector3<float> const&);
    calcTargetTrans(sead::Vector3<float>*, sead::Vector3<float> const&, bool);
    throwStraightTarget(sead::Vector3<float> const&, sead::Vector3<float> const&, CapThrowerCap*, bool);
    ~CapThrowerStateCapThrow();
};
