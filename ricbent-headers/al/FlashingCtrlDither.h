#pragma once

namespace al { 

class FlashingCtrlDither
{
public:
    FlashingCtrlDither(al::LiveActor*);
    start(int);
    end();
    movement();
};

} 
