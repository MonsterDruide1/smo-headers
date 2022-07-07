#pragma once

namespace sead { 

class BufferWriteStreamSrc
{
public:
    BufferWriteStreamSrc(sead::StreamSrc*, void*, unsigned int);
    ~BufferWriteStreamSrc();
    read(void*, unsigned int);
    write(void const*, unsigned int);
    skip(int);
    rewind();
    flush();
    isEOF();
};

} 
