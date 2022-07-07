#pragma once

namespace sead { 

class FileDeviceReadStream
{
public:
    FileDeviceReadStream(sead::Stream::Modes);
    FileDeviceReadStream(sead::FileHandle*, sead::Stream::Modes);
    FileDeviceReadStream(sead::StreamFormat*);
    FileDeviceReadStream(sead::FileHandle*, sead::StreamFormat*);
    ~FileDeviceReadStream();
    setFileHandle(sead::FileHandle*);
};

} 
