#pragma once

namespace nn { namespace nex { 

class HighResolutionChrono
{
public:
    HighResolutionChrono(bool);
    Reset(unsigned long);
    ~HighResolutionChrono();
    GetElapsed(bool);
};

} } 
