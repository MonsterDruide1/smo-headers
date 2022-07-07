#pragma once

namespace sead { 

class BufferMultiByteTextWriteStream
{
public:
    BufferMultiByteTextWriteStream(sead::WriteStream*, void*, unsigned int);
    ~BufferMultiByteTextWriteStream();
};

} 
