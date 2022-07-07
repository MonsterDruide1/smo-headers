#pragma once

class BossForestSatelliteCore
{
public:
    BossForestSatelliteCore();
    init(al::ActorInitInfo const&);
    appear();
    isDead() const;
    isPunched() const;
    isTrampled() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exePunched();
    exeTrampled();
    exeDie();
};
