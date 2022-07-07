#pragma once

class PlayerMotionObserver
{
public:
    PlayerMotionObserver(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    exeCheckLand();
    exeWaitForSwitchOn();
};
