#pragma once

namespace sead { 

class RamWriteStream
{
public:
    RamWriteStream(void*, unsigned int, sead::Stream::Modes);
    RamWriteStream(void*, unsigned int, sead::StreamFormat*);
    ~RamWriteStream();
};

} 
