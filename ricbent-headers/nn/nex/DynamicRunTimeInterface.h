#pragma once

namespace nn { namespace nex { 

class DynamicRunTimeInterface
{
public:
    RegisterParseTree(unsigned char*, unsigned int);
    DynamicRunTimeInterface();
    ~DynamicRunTimeInterface();
    GetInstance();
    s_pDynamicRunTimeInterface;
};

} } 
