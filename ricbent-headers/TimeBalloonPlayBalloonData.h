#pragma once

class TimeBalloonPlayBalloonData
{
public:
    init();
    copy(TimeBalloonPlayBalloonData const&);
    set(unsigned long, char const*);
    operator==(TimeBalloonPlayBalloonData const&) const;
    TimeBalloonPlayBalloonData();
    operator!=(TimeBalloonPlayBalloonData const&) const;
};
