#pragma once

namespace nn { namespace nex { 

class NonReentrantableForcedCriticalSection
{
public:
    ~NonReentrantableForcedCriticalSection();
    IsReentrantable() const;
};

} } 
