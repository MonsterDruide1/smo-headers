#pragma once

namespace sead { 

class BufferMultiByteTextWriteStreamSrc
{
public:
    BufferMultiByteTextWriteStreamSrc(sead::StreamSrc*, void*, unsigned int);
    write(void const*, unsigned int);
    ~BufferMultiByteTextWriteStreamSrc();
};

} 
