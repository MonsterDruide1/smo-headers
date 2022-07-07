#pragma once

namespace al { 

class ClippingFarAreaObserver
{
public:
    ClippingFarAreaObserver(al::AreaObjDirector const*, al::PlayerHolder const*);
    setDefaultFarClipDistance(float);
    setDefaultFarClipDistanceSub(float);
    endInit();
    update();
};

} 
