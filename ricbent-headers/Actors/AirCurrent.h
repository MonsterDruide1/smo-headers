#pragma once

class AirCurrent
{
public:
    AirCurrent(char const*);
    init(al::ActorInitInfo const&);
    start();
    stop();
    attackSensor(al::HitSensor*, al::HitSensor*);
    calcBlowPowerRate() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    endClipped();
    exeStop();
    exeSleep();
    isBlowContinuous() const;
    exeWait();
    isMoveAtWait() const;
    updateKeyMove();
    exeBlowSign();
    exeBlowStart();
    exeBlow();
    isMoveAtBlow() const;
    sendBlowMsgToCollision();
    exeBlowEnd();
};
