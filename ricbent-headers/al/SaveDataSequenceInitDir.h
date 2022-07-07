#pragma once

namespace al { 

class SaveDataSequenceInitDir
{
public:
    SaveDataSequenceInitDir(unsigned char);
    start(unsigned char*, unsigned int, unsigned int);
    threadFunc(char const*);
};

} 
