#pragma once

class BossRaidStateBreathAttack
{
public:
    BossRaidStateBreathAttack(BossRaid*, al::ActorInitInfo const&);
    setAimRate(float);
    appear();
    kill();
    control();
    updateAttackSign();
    updateAttackSignLv1();
    updateAttackSignLv2();
    updateAttackSignLv3();
    updateAttack();
    updateAttackLv1();
    updateAttackLv2();
    updateAttackLv3();
    limitBreathPos(sead::Vector3<float>*, sead::Vector3<float> const&, float, float);
    shotWheel(float);
    calcBreathPosDistanceDegree(sead::Vector3<float>*, float, float);
    exeAttackSign();
    exeAttackStart();
    exeAttack();
    exeAttackWait();
    exeAttackEnd();
    ~BossRaidStateBreathAttack();
};
