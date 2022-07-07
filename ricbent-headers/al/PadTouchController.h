#pragma once

namespace al { 

class PadTouchController
{
public:
    PadTouchController(sead::ControllerMgr*);
    ~PadTouchController();
    calcImpl_();
};

} 
