#pragma once

class MoonBasementMeteorPointObj
{
public:
    MoonBasementMeteorPointObj(char const*);
    init(al::ActorInitInfo const&);
    onChangeTrans();
    offChangeTrans();
    onSwitchStart();
    offSwitchStart();
    initAfterPlacement();
    movement();
    exeDelay();
    exeWait();
    exeStop();
};
