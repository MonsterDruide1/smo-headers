#pragma once

class TRexStateSleep
{
public:
    TRexStateSleep(char const*, al::LiveActor*);
    appear();
    receiveMsg(bool*, al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeSleep();
    exeSleepReactionHipDrop();
    ~TRexStateSleep();
};
