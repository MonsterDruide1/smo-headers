#pragma once

class ByugoStateHack
{
public:
    ByugoStateHack(al::LiveActor*, CapTargetInfo*);
    appear();
    kill();
    receiveMsgInitCapTargetInfo(al::SensorMsg const*);
    receiveMsgHackStart(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgHackEnd(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    calcHackBlowPowerRate() const;
    isWideBlow() const;
    exeStartDemo();
    exeWait();
    calcMove();
    tryChangeNerveIfTriggerBlow();
    exeMove();
    exeBlowStart();
    exeBlow();
    exeBlowWide();
    exeBlowEnd();
    forceEndHack();
    ~ByugoStateHack();
};
