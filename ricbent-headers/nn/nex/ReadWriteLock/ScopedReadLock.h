#pragma once

namespace nn { namespace nex { namespace ReadWriteLock { 

class ScopedReadLock
{
public:
    ScopedReadLock(nn::nex::ReadWriteLock*);
    ~ScopedReadLock();
};

} } } 
