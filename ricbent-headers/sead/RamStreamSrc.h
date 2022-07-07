#pragma once

namespace sead { 

class RamStreamSrc
{
public:
    RamStreamSrc(void*, unsigned int);
    ~RamStreamSrc();
    read(void*, unsigned int);
    write(void const*, unsigned int);
    skip(int);
    rewind();
    isEOF();
};

} 
