#pragma once

class DoorCity
{
public:
    DoorCity(char const*);
    init(al::ActorInitInfo const&);
    onStageSwitch();
    listenSwitchOff();
    exeWaitOpen();
    exeOpen();
    exeWaitClose();
};
