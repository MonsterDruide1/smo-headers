#pragma once

namespace al { 

class SeDuckingRequest
{
public:
    SeDuckingRequest();
    startRequest();
    activate();
    holdRequest(float, char const*, char const*);
    endRequest();
    deactivate();
    update();
    getCurVolume() const;
};

} 
