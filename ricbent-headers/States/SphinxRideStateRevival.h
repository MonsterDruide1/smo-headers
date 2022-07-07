#pragma once

class SphinxRideStateRevival
{
public:
    SphinxRideStateRevival(SphinxRide*, al::ActorInitInfo const&, bool);
    appear();
    exeRevival();
    isNoMove();
    ~SphinxRideStateRevival();
};
