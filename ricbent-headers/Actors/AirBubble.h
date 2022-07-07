#pragma once

class AirBubble
{
public:
    AirBubble(char const*, bool);
    init(al::ActorInitInfo const&);
    endClipped();
    startClipped();
    appear();
    appearPopup();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeCreate();
    exeWait();
    exeReaction();
    exeMove();
    exeGot();
    getItem();
    exeCapGet();
    exeBreak();
};
