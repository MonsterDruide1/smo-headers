#pragma once

namespace sead { 

class BufferFileDeviceWriteStream
{
public:
    BufferFileDeviceWriteStream(sead::Stream::Modes);
    BufferFileDeviceWriteStream(sead::StreamFormat*);
    BufferFileDeviceWriteStream(sead::FileHandle*, sead::Stream::Modes);
    BufferFileDeviceWriteStream(sead::FileHandle*, sead::StreamFormat*);
    ~BufferFileDeviceWriteStream();
};

} 
