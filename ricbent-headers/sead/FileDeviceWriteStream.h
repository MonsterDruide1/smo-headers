#pragma once

namespace sead { 

class FileDeviceWriteStream
{
public:
    FileDeviceWriteStream(sead::Stream::Modes);
    FileDeviceWriteStream(sead::StreamFormat*);
    FileDeviceWriteStream(sead::FileHandle*, sead::Stream::Modes);
    FileDeviceWriteStream(sead::FileHandle*, sead::StreamFormat*);
    ~FileDeviceWriteStream();
    setFileHandle(sead::FileHandle*);
};

} 
