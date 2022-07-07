#pragma once

namespace nn { namespace nex { 

class LockChecker
{
public:
    operator=(nn::nex::LockChecker const&);
    LockChecker(unsigned int);
    ~LockChecker();
    LockChecker(nn::nex::LockChecker const&);
};

} } 
