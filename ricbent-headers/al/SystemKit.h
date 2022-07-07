#pragma once

namespace al { 

class SystemKit
{
public:
    SystemKit();
    createMemorySystem(sead::Heap*);
    createFileLoader(int);
    createResourceSystem(char const*, int, int, bool);
    createSaveDataSystem(unsigned int, int);
};

} 
