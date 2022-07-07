#pragma once

class DoshiStateWanderBossBattle
{
public:
    DoshiStateWanderBossBattle(Doshi*);
    appear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setting(sead::Vector3<float> const&, sead::Vector3<float> const&);
    exeWait();
    exeReaction();
    ~DoshiStateWanderBossBattle();
};
