#pragma once

class AppearSwitchSave
{
public:
    AppearSwitchSave(al::LiveActor*, al::ActorInitInfo const&);
    onSwitch();
    onSwitchDemo();
    isOn() const;
};
