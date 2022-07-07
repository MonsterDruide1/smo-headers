#pragma once

class AmiiboNpc
{
public:
    AmiiboNpc(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    reenterStage();
    receiveEvent(al::EventFlowEventData const*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeWaitEndAmiiboSearch();
    exeTalk();
    exeReaction();
    exeWaitPlayerPutOn();
    exeChangeCostume();
};
