#pragma once

namespace nn { namespace nex { 

class ReadWriteLock
{
public:
    ReadWriteLock(unsigned int);
    ~ReadWriteLock();
    BeginRead();
    EndRead();
    BeginWrite();
    EndWrite();
};

} } 
