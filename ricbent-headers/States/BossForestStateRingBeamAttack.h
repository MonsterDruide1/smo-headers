#pragma once

class BossForestStateRingBeamAttack
{
public:
    BossForestStateRingBeamAttack(BossForest*);
    initialize(al::ActorInitInfo const&, int);
    attackSensor(al::HitSensor*, al::HitSensor*);
    appear();
    kill();
    exeAttackReady();
    exeAttackStart();
    exeEmitRingBeam();
    exeInterval();
    exeWaitBeamFinished();
    exeAttackEnd();
    ~BossForestStateRingBeamAttack();
};
