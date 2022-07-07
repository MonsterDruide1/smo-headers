#pragma once

class MoonWorldCaptureParadeLift
{
public:
    MoonWorldCaptureParadeLift(char const*);
    init(al::ActorInitInfo const&);
    start();
    exeWait();
    exeMoveSign();
    exeMove();
    exeDelay();
};
