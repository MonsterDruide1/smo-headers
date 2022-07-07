#pragma once

class KoopaLv1
{
public:
    KoopaLv1(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    kill();
    movement();
    calcAnim();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeDemoStart();
    exeJump1();
    exeThrowCap();
    exeJump2();
    exeHipDrop();
    exeThrowBall();
    exeHitPunch();
    exeAttackTail();
    exeRecover();
    exeFireBeam();
    exeDeadAndDemoEnd();
    exeDemoClashBasement();
};
