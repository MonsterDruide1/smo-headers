#pragma once

class Candlestand
{
public:
    Candlestand(char const*);
    init(al::ActorInitInfo const&);
    burnUp();
    initAfterPlacement();
    appear();
    appearBurning();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryBurn(float);
    startRhythmSync();
    stopRhythmSync();
    exeBurnUp();
    exeBurnDown();
    exeBurnOut();
    isBurnUp() const;
    isBurning() const;
};
