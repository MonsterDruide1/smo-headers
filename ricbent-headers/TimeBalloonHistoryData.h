#pragma once

class TimeBalloonHistoryData
{
public:
    TimeBalloonHistoryData();
    clear();
    copy(TimeBalloonHistoryData const&);
    set(char const*, TimeBalloon::NotifierState, bool, int, int);
};
