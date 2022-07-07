#pragma once

class SnowWorldBigIcicle
{
public:
    SnowWorldBigIcicle(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    exeCameraDelay();
    exeFallDelay();
    exeFall();
    exeFallEnd();
    exeFallWait();
};
