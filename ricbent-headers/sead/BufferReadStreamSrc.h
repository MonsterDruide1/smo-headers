#pragma once

namespace sead { 

class BufferReadStreamSrc
{
public:
    BufferReadStreamSrc(sead::StreamSrc*, void*, unsigned int);
    ~BufferReadStreamSrc();
    read(void*, unsigned int);
    write(void const*, unsigned int);
    skip(int);
    rewind();
    isEOF();
};

} 
