#pragma once

class ShibakenStateSit
{
public:
    ShibakenStateSit(char const*, Shibaken*, ActorStateReactionBase*, bool);
    appear();
    tryStartSitEnd();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeSitStart();
    exeSit();
    exeSitBow();
    exeSitEnd();
    exeReaction();
    exeReactionAfter();
    ~ShibakenStateSit();
};
