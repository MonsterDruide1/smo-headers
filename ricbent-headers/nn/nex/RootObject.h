#pragma once

namespace nn { namespace nex { 

class RootObject
{
public:
    ~RootObject();
    operator new(unsigned long);
    operator delete(void*);
    operator new(unsigned long, char const*, unsigned int);
    operator new[](unsigned long);
    operator new[](unsigned long, char const*, unsigned int);
    operator delete[](void*);
    operator delete(void*, char const*, unsigned int);
    operator delete[](void*, char const*, unsigned int);
    operator new(unsigned long, nn::nex::RootObject::TargetPool);
    operator new(unsigned long, nn::nex::RootObject::TargetPool, char const*, unsigned int);
};

} } 
