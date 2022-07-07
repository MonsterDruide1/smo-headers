#pragma once

namespace nn { namespace nex { 

class Pacer
{
public:
    Pacer(float);
    SetFrequency(float);
    ResetStats();
    ~Pacer();
    GetStats(int*, int*, int*, int*, unsigned int*) const;
    Interrupt();
    Pace();
};

} } 
