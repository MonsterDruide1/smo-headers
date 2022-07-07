#pragma once

class KoopaStateThrowCap
{
public:
    KoopaStateThrowCap(al::LiveActor*, KoopaCap*, KoopaFlag*, KoopaNumberCounter const*, KoopaCameraCtrl*, KoopaWeaponHolder*);
    appear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    skipSign(bool);
    exeTakeCapSingleStart();
    exeTakeCapSingle();
    exeTakeCapStart();
    exeTakeCap();
    exeShowCap();
    exeShowCapEnd();
    exeThrowCapSign();
    exeThrowCapStart();
    exeThrowCap();
    exeThrowCapEnd();
    exeWaitOperateStart();
    exeWaitOperate();
    exeFlyBackCapStart();
    exeFlyBackCap();
    exeSurpriseStart();
    exeSurprise();
    exeDownRecoverCapStart();
    exeDownRecoverCap();
    exeDownRecoverFlyBackCapStart();
    exeDownRecoverFlyBackCap();
    exeCatchCapStart();
    exeCatchCap();
    exeSurpriseAngry();
    ~KoopaStateThrowCap();
};
