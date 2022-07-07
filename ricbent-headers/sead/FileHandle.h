#pragma once

namespace sead { 

class FileHandle
{
public:
    ~FileHandle();
    close();
    tryClose();
    flush();
    tryFlush();
    read(unsigned char*, unsigned int);
    tryRead(unsigned int*, unsigned char*, unsigned int);
    write(unsigned char const*, unsigned int);
    tryWrite(unsigned int*, unsigned char const*, unsigned int);
    seek(int, sead::FileDevice::SeekOrigin);
    trySeek(int, sead::FileDevice::SeekOrigin);
    getCurrentSeekPos();
    tryGetCurrentSeekPos(unsigned int*);
    getFileSize();
    tryGetFileSize(unsigned int*);
};

} 
