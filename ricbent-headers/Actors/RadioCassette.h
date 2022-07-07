#pragma once

class RadioCassette
{
public:
    RadioCassette(char const*);
    init(al::ActorInitInfo const&);
    appear();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    endWait();
    exeReactionNoise();
    exeReactionNoiseEnd();
    exeReactionTuning();
    exeStartSpecialCollectBgm();
};
