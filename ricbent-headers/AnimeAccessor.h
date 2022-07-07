#pragma once

class AnimeAccessor
{
public:
    AnimeAccessor(al::LiveActor*);
    tryActivate();
    deactivate();
    trySetAnimFrame(float);
    trySetAnimFrameRate(float);
};
