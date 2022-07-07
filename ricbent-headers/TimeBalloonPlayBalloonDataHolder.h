#pragma once

class TimeBalloonPlayBalloonDataHolder
{
public:
    TimeBalloonPlayBalloonDataHolder();
    init();
    copy(TimeBalloonPlayBalloonDataHolder const&);
    isPlayBalloonAlready(unsigned long, char const*);
    trySet(unsigned long, char const*);
};
