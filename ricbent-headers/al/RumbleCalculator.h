#pragma once

namespace al { 

class RumbleCalculator
{
public:
    RumbleCalculator(float, float, float, unsigned int);
    setParam(float, float, float, unsigned int);
    start(unsigned int);
    calc();
    reset();
};

} 
