#pragma once

class TimeBalloonPlayAudio
{
public:
    TimeBalloonPlayAudio(al::LiveActor const*);
    startSeGameStart();
    startBgm();
    endBgm();
    notifyExtension();
};
