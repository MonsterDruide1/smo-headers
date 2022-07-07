#pragma once

namespace al { 

class VisibleSwitchMapParts
{
public:
    VisibleSwitchMapParts(char const*);
    init(al::ActorInitInfo const&);
    startDisappear();
    startAppear();
    startSuddenDisappear();
    initAfterPlacement();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeShow();
    exeDisappear();
    exeDisappearDither();
    exeHide();
    exeAppear();
    exeAppearDither();
};

} 
