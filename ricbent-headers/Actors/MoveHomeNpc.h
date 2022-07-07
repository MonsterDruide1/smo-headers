#pragma once

class MoveHomeNpc
{
public:
    MoveHomeNpc(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startTalk();
    skipTalk();
    exeTalk();
    exeTalkEnd();
};
