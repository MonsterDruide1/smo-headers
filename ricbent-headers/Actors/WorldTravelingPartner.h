#pragma once

class WorldTravelingPartner
{
public:
    WorldTravelingPartner(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startWait();
    startTalk();
    exeWait();
    exeTalk();
    exeScared();
    exeReaction();
    initAfterPlacement();
};
