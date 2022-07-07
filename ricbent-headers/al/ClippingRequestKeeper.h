#pragma once

namespace al { 

class ClippingRequestKeeper
{
public:
    ClippingRequestKeeper(int);
    executeRequest();
    request(al::LiveActor*, al::ClippingRequestType);
};

} 
