#pragma once

namespace sead { 

class RamReadStream
{
public:
    RamReadStream(void const*, unsigned int, sead::Stream::Modes);
    RamReadStream(void const*, unsigned int, sead::StreamFormat*);
    ~RamReadStream();
};

} 
