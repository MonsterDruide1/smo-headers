#pragma once

class CrystalBreakable
{
public:
    CrystalBreakable(char const*);
    init(al::ActorInitInfo const&);
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryAppearItem();
    exeWait();
    exeDamage();
    exeBreak();
};
