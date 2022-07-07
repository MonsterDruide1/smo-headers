#pragma once

class KoopaStateRecover
{
public:
    KoopaStateRecover(al::LiveActor*, KoopaCap*, KoopaBattleFieldBarrier*, KoopaNumberCounter const*, KoopaFlag*, KoopaWeaponHolder*, KoopaLandPointHolder*, KoopaHintHolder*, KoopaCameraCtrl*, KoopaDoveEmitter*);
    startDamageL();
    startDamageR();
    exeDamage();
    exeDamageCollide();
    exeDownJumpStart();
    exeDownJump();
    exeDownLandStart();
    exeDownLand();
    exeDownLandEnd();
    exeJump();
    exeAngry();
    appear();
    ~KoopaStateRecover();
};
