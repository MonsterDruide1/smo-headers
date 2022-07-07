#pragma once

namespace nn { namespace nex { 

class FileStorageUnit
{
public:
    GetSize() const;
    Truncate();
    Read(unsigned long, unsigned long, unsigned char*) const;
    Write(unsigned long, unsigned long, unsigned char*);
    Close();
    ~FileStorageUnit();
};

} } 
