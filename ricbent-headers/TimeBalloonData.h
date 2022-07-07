#pragma once

class TimeBalloonData
{
public:
    TimeBalloonData();
    clear();
    setGotPlayerName(char const*);
    copy(TimeBalloonData const&);
    isEmpty() const;
};
