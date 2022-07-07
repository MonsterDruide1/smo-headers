#pragma once

namespace nn { namespace nex { 

class Statistics
{
public:
    Statistics();
    Reset();
    ~Statistics();
    AddValue(float);
    GetAverage() const;
    Trace(unsigned long, char const*);
};

} } 
