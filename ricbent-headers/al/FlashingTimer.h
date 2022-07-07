#pragma once

namespace al { 

class FlashingTimer
{
public:
    FlashingTimer(int, int, int, int);
    start(int, int, int, int);
    update();
    isHurryStart() const;
    getLastTime() const;
};

} 
