#pragma once

namespace nn { namespace nex { 

class Timeout
{
public:
    SetRelativeExpirationTime(int);
    SetRTO(unsigned int);
    GetRTO();
    SetExpirationTime(nn::nex::Time);
    IsExpired(nn::nex::Time const&) const;
    Start();
    GetAwaitedTime();
    IsAwaited(nn::nex::Time const&) const;
    Timeout();
    ~Timeout();
    operator<(nn::nex::Timeout&);
};

} } 
