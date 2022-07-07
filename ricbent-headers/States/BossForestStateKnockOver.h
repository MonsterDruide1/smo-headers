#pragma once

class BossForestStateKnockOver
{
public:
    BossForestStateKnockOver(BossForest*, sead::Vector3<float> const&, sead::Vector3<float> const&, int);
    appear();
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isDamaged() const;
    exeKnockOverSign();
    exeKnockOverStart();
    exeKnockOver();
    exeKnockOverEnd();
    exeDamage();
    exeDamageEnd();
    ~BossForestStateKnockOver();
};
