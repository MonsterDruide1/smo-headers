#pragma once

class CheckpointFlag
{
public:
    CheckpointFlag(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    getPlayerRestartInfo() const;
    setAfter();
    startArriveByWarp();
    initHomeFlag(al::ActorInitInfo const&);
    exeBefore();
    exeGet();
    exeAfter();
    exeShake();
    getMessageSystem() const;
};
