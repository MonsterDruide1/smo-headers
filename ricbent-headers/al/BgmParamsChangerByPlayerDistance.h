#pragma once

namespace al { 

class BgmParamsChangerByPlayerDistance
{
public:
    BgmParamsChangerByPlayerDistance(al::LiveActor const*, al::LiveActor*, bool, float, float, float, char const*, al::BgmParamsChangerByPlayerDistance::IFunctorCreator*);
    update();
    startChangeParams();
    endChangeParams();
};

} 
