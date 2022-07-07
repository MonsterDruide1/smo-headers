#pragma once

class TimeBalloonPlayerPlayerHolder
{
public:
    TimeBalloonPlayerPlayerHolder(al::LiveActor const*, al::ActorInitInfo const&);
    tryReadToAll(unsigned long);
    tryReadAnswer(unsigned long, char const*);
    startPlay();
    updateGhost();
    tryChangeCamera();
};
