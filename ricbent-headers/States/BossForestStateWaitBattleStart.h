#pragma once

class BossForestStateWaitBattleStart
{
public:
    BossForestStateWaitBattleStart(BossForest*, al::ActorInitInfo const&);
    appear();
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeCapKeepOn();
    endCapKeepOn();
    exeDamage();
    exeKnockOver();
    exeDamageEnd();
    ~BossForestStateWaitBattleStart();
};
