#pragma once

namespace nn { namespace nex { 

class HighResolutionClock
{
public:
    HighResolutionClock();
    ~HighResolutionClock();
    GetTickCount();
    GetLowResolutionTime();
};

} } 
