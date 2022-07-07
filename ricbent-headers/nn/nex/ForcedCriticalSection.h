#pragma once

namespace nn { namespace nex { 

class ForcedCriticalSection
{
public:
    ~ForcedCriticalSection();
    Enter();
    Leave();
    IsForce() const;
    IsReentrantable() const;
};

} } 
