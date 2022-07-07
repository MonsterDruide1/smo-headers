#pragma once

class WorldTravelingPeach
{
public:
    WorldTravelingPeach(char const*);
    init(al::ActorInitInfo const&);
    startPeachWorldHomeCastleCapDemo();
    endPeachWorldHomeCastleCapDemo();
    initAfterPlacement();
    makeActorDead();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    exeEvent();
};
