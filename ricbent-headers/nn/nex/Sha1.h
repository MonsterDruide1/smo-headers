#pragma once

namespace nn { namespace nex { 

class Sha1
{
public:
    Sha1();
    ~Sha1();
    Init();
    Update(void const*, unsigned long);
    GetHash(void*, unsigned long);
    GenerateHash(void*, unsigned long, void const*, unsigned long);
};

} } 
