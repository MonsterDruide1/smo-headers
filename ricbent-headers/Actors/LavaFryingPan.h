#pragma once

class LavaFryingPan
{
public:
    LavaFryingPan(char const*);
    init(al::ActorInitInfo const&);
    exeDelay();
    exeRotateSign();
    exeRotate();
    exeWaitUp();
    exeWaitDown();
    control();
};
