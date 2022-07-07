#pragma once

class SphinxRideAim
{
public:
    SphinxRideAim(SphinxRide*);
    updateLook();
    updateTarget();
    updateLookPos(float);
    updateAimInfo();
    updateReset();
};
