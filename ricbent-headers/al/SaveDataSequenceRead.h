#pragma once

namespace al { 

class SaveDataSequenceRead
{
public:
    SaveDataSequenceRead(unsigned char);
    start(unsigned char*, unsigned int, unsigned int);
    threadFunc(char const*);
    read(sead::FileDevice*, char const*, unsigned int*);
};

} 
