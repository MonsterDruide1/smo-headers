#pragma once

namespace sead { 

class FileDeviceStreamSrc
{
public:
    FileDeviceStreamSrc();
    FileDeviceStreamSrc(sead::FileHandle*);
    ~FileDeviceStreamSrc();
    read(void*, unsigned int);
    write(void const*, unsigned int);
    skip(int);
    rewind();
    isEOF();
    setFileHandle(sead::FileHandle*);
};

} 
