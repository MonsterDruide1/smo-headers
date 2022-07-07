#pragma once

class CapCatapult
{
public:
    CapCatapult(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isReactionable() const;
    isActive() const;
    resetAll();
    isEnableBind() const;
    exeWait();
    exeReaction();
    exeLockedOn();
    exePull();
    exeBack();
    exeShoot();
    exeShootEnd();
    control();
};
