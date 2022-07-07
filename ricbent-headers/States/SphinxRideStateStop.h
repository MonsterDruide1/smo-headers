#pragma once

class SphinxRideStateStop
{
public:
    SphinxRideStateStop(SphinxRide*, SphinxRideParam const&);
    appear();
    kill();
    exeStopStart();
    exeStopButton();
    updateStopCommon();
    exeStopButtonSwing();
    updateStopStrong();
    exeStopSwing();
    ~SphinxRideStateStop();
};
