#pragma once

namespace sead { 

class BufferFileDeviceReadStream
{
public:
    ~BufferFileDeviceReadStream();
    BufferFileDeviceReadStream(sead::Stream::Modes);
    BufferFileDeviceReadStream(sead::StreamFormat*);
    BufferFileDeviceReadStream(sead::FileHandle*, sead::Stream::Modes);
    BufferFileDeviceReadStream(sead::FileHandle*, sead::StreamFormat*);
};

} 
