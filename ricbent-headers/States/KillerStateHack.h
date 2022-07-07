#pragma once

class KillerStateHack
{
public:
    KillerStateHack(al::LiveActor*, bool, bool);
    appear();
    kill();
    endHackExplode();
    receiveMsgInitCapTargetInfo(al::SensorMsg const*);
    receiveMsgNpcScareByEnemy(al::SensorMsg const*);
    receiveMsgHackStart(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgHackEndExplode(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgHackEnd(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensorCheckExplode(al::HitSensor*, al::HitSensor*);
    isStarting() const;
    isEnableExplode() const;
    isBoosting() const;
    isTurbo() const;
    exeStart();
    exeFly();
    ~KillerStateHack();
};
