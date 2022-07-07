#pragma once

class CageSwitch
{
public:
    CageSwitch(char const*);
    init(al::ActorInitInfo const&);
    open();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeCloseWait();
    exeWaitOpenDemoStart();
    exeWaitCameraInterpole();
    exeOpenDemo();
    exeOpenWait();
};
