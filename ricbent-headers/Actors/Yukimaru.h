#pragma once

class Yukimaru
{
public:
    Yukimaru(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    movement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEnableHack() const;
    afterHack();
    isEnableReaction() const;
    receiveEvent(al::EventFlowEventData const*);
    disableHack();
    enableHack();
    exeEvent();
    exeReaction();
    exeHack();
    exeHackAfter();
};
