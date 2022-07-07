#pragma once

class KuriboTowerSwitch
{
public:
    KuriboTowerSwitch(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isReactionNerve() const;
    exeDisable();
    exeOffWait();
    exeReactionLand();
    exeOn();
    exeOnWait();
};
