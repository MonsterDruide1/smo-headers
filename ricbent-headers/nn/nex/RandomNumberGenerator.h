#pragma once

namespace nn { namespace nex { 

class RandomNumberGenerator
{
public:
    SetRandomNumberSeed(unsigned int);
    GetRandomNumber(unsigned int);
    GetRealRandomNumber(float);
    RandomNumberGenerator();
    ~RandomNumberGenerator();
};

} } 
