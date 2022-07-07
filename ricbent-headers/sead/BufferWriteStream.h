#pragma once

namespace sead { 

class BufferWriteStream
{
public:
    BufferWriteStream(sead::WriteStream*, void*, unsigned int);
    ~BufferWriteStream();
};

} 
