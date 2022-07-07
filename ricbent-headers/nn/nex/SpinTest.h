#pragma once

namespace nn { namespace nex { 

class SpinTest
{
public:
    LeaveOnTimeout();
    SpinOnce(char const*, unsigned int, char const*);
    SpinTest(unsigned int, unsigned int);
    ~SpinTest();
    SetTrace(unsigned int, unsigned long);
    AssertOnTimeout();
    GetElapsed();
    GetTimeout();
    GetRemainingTime();
};

} } 
