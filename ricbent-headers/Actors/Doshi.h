#pragma once

class Doshi
{
public:
    Doshi(char const*);
    init(al::ActorInitInfo const&);
    onBattleStart();
    doReaction(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    requestUpdateAction(float, float);
    exeRun();
    isInWater() const;
    exeReaction();
    exeBossBattle();
    control();
    requestStartCamera();
    requestEndCamera();
};
