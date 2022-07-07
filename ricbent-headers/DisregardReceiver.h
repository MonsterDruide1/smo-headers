#pragma once

class DisregardReceiver
{
public:
    DisregardReceiver(al::LiveActor*, char const*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    checkActionDisregardAll() const;
    checkActionDisregardHomingAttack() const;
    checkActionDisregardTargetMarker() const;
};
