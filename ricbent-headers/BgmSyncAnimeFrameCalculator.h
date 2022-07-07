#pragma once

class BgmSyncAnimeFrameCalculator
{
public:
    BgmSyncAnimeFrameCalculator();
    reset();
    startCalc(float, float, float);
    calc(float);
    updateParams(float);
    setSyncChaseRateOffsetMax(float, float, float, float);
};
