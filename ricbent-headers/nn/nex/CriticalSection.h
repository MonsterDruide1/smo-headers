#pragma once

namespace nn { namespace nex { 

class CriticalSection
{
public:
    CriticalSection(unsigned int, bool);
    CriticalSection(nn::nex::CriticalSection const&);
    operator=(nn::nex::CriticalSection const&);
    ~CriticalSection();
    HasOwnership() const;
    HasNotOwnership() const;
    ValidateOwnership(bool) const;
    Enter();
    Leave();
    IsForce() const;
    IsReentrantable() const;
};

} } 
