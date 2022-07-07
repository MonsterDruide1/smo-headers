#pragma once

class BombTailStateResetAttack
{
public:
    BombTailStateResetAttack(al::LiveActor*, al::LiveActor*, sead::PtrArray<BombTailTail>*, BombTailBombHolder*, al::ActorInitInfo const&, sead::Matrix34<float> const&, int);
    appear();
    getRailRider() const;
    attackSensorByCap(al::HitSensor*, al::HitSensor*);
    receiveMsgByCap(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeResetAttackStart();
    startActionWithActors(char const*);
    exeResetAttackStartUp();
    syncBombTailPos();
    exeResetAttackMove();
    moveHorizontalCore(sead::Vector3<float> const&);
    exeResetAttackSign();
    exeResetAttack();
    exeResetAttackTurn();
    exeResetAttackDamageStart();
    calcCapPlacementMtx(sead::Matrix34<float>*);
    exeResetAttackDamage();
    exeResetAttackDamageEnd();
    exeResetAttackReturn();
    exeResetAttackReturnDown();
    exeResetAttackEnd();
    ~BombTailStateResetAttack();
};
