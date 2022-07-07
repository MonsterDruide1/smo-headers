#pragma once

class Poetter
{
public:
    Poetter(char const*);
    init(al::ActorInitInfo const&);
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    startTalkNoMore();
    resetYawnWait();
    exeEvent();
    exeEventScare();
    exeReaction();
    getMessageSystem() const;
};
