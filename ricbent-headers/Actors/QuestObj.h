#pragma once

class QuestObj
{
public:
    QuestObj(char const*);
    init(al::ActorInitInfo const&);
    switchStart();
    start();
    switchStop();
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
