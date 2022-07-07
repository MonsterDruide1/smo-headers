#pragma once

namespace sead { 

class DirectoryHandle
{
public:
    close();
    tryClose();
    read(sead::DirectoryEntry*, unsigned int);
    tryRead(unsigned int*, sead::DirectoryEntry*, unsigned int);
    ~DirectoryHandle();
};

} 
