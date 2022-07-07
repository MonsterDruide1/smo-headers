#pragma once

namespace al { 

class FlashingCtrl
{
public:
    FlashingCtrl(al::LiveActor*, bool, bool);
    movement();
    end();
    isNowFlashing() const;
    updateFlashing();
    start(int);
    getCurrentInterval() const;
    getFlashingAnimRate() const;
    isNowJustFlashed() const;
    isNowOn() const;
};

} 
