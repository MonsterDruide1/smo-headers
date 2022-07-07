#pragma once

class GotogotonGoal
{
public:
    GotogotonGoal(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
