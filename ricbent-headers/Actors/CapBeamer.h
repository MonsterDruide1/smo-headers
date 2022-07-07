#pragma once

class CapBeamer
{
public:
    CapBeamer(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeAttackSign();
    exeAttackStart();
    exeAttackLoop();
    exeAttackEnd();
    exeReaction();
};
