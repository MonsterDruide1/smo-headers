#pragma once

class KoopaStateAttackTail
{
public:
    KoopaStateAttackTail(al::LiveActor*, KoopaNumberCounter*, KoopaFlag*, KoopaRingBeamEmitter*, KoopaJointCtrlHolder*);
    appear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    tryStart(al::SensorMsg const*, al::HitSensor*, al::HitSensor*, KoopaCap*);
    receiveMsgHitPunchNoAction(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEndAttackTailSuccess() const;
    exeAttackTailSign();
    exeAttackTailSignShort();
    exeAttackTailStart();
    exeAttackTail();
    exeAttackTailEnd();
    exeAttackTailAfter();
    exeAttackTailAfterEnd();
    exeAttackTailSuccess();
    ~KoopaStateAttackTail();
};
