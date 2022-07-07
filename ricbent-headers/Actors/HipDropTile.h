#pragma once

class HipDropTile
{
public:
    HipDropTile(char const*);
    HipDropTile(unsigned int, char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeWaitPlayerOnTop();
    exePressDown();
    exeShowPopup();
    exePlayerHopOn();
    shake();
    exePlayerHopOff();
};
