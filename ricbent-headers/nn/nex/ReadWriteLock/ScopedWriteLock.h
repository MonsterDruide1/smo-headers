#pragma once

namespace nn { namespace nex { namespace ReadWriteLock { 

class ScopedWriteLock
{
public:
    ScopedWriteLock(nn::nex::ReadWriteLock*);
    ~ScopedWriteLock();
};

} } } 
