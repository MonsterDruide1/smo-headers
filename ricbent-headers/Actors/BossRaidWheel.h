#pragma once

class BossRaidWheel
{
public:
    BossRaidWheel(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeLand();
    exeRun();
    shotGround(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
};
