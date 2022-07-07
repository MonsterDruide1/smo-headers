#pragma once

class GolemShoutState
{
public:
    GolemShoutState(char const*, IUseGolemState*);
    appear();
    kill();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    ~GolemShoutState();
};
