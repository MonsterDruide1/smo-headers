#pragma once

namespace sead { 

class BufferReadStream
{
public:
    BufferReadStream(sead::ReadStream*, void const*, unsigned int);
    ~BufferReadStream();
};

} 
