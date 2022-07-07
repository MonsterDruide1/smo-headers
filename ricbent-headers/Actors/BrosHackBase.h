#pragma once

class BrosHackBase
{
public:
    BrosHackBase(int, char const*, bool, char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    attackFront(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setupReset();
    endClipped();
    kill();
    tryAttachMtxConnect();
    tryDetachMtxConnect();
    tryConnectMtx();
    tryConnectResetMtx();
    tryBlowDownIfAlive(sead::Vector3<float> const&, al::HitSensor*);
    tryAttachWeapon();
    tryFindDeadOrBreakWeapon() const;
    isEnableAttackWeapon(bool) const;
    tryAttachAttackWeapon();
    killShineGetDemo();
    tryKillAttachWeapon();
    isHacked() const;
    exeEnemyMovement();
    exeHackMovement();
    exeReset();
    exeRevive();
    attach();
    attachAttack();
};
