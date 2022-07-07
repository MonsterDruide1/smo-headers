#pragma once

namespace al { 

class SaveDataSequenceWrite
{
public:
    SaveDataSequenceWrite(unsigned char);
    start(unsigned char*, unsigned int, unsigned int, bool);
    startFlushOnly();
    threadFunc(char const*);
    write(sead::FileDevice*, char const*);
};

} 
