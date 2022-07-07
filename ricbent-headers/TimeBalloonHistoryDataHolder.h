#pragma once

class TimeBalloonHistoryDataHolder
{
public:
    TimeBalloonHistoryDataHolder();
    tryReadTimeBalloonHistoryData(char const*);
    writeGotBalloon(char const*);
    writeRateUpBalloon(char const*, int);
    writePlayNow(char const*);
    tryGetHistoryDataNotNotify();
};
