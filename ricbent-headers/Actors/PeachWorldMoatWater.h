#pragma once

class PeachWorldMoatWater
{
public:
    PeachWorldMoatWater(char const*);
    init(al::ActorInitInfo const&);
    control();
    exeWait();
    exeCameraDelay();
    exeFallDelay();
    exeFall();
    exeFallEnd();
    exeFallWait();
};
