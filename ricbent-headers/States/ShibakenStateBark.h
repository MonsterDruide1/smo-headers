#pragma once

class ShibakenStateBark
{
public:
    ShibakenStateBark(char const*, Shibaken*, ActorStateReactionBase*);
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryStart();
    exeBarkSign();
    exeBark();
    exeWait();
    exeWalk();
    exeTurn();
    exeReaction();
    ~ShibakenStateBark();
};
