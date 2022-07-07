#pragma once

class TimeBalloonPlayerPlayer
{
public:
    TimeBalloonPlayerPlayer(al::ActorInitInfo const&, sead::Heap*, char const*);
    execute();
    tryReadAndInit(char const*, unsigned long, char const*, bool);
    exeReady();
    applyFrameInfoToGhost(int);
    exePlay();
    exeFind();
    exeDown();
    exeEnd();
    startPlay();
    isEnd() const;
    startCamera();
    endCamera();
    getNerveKeeper() const;
};
