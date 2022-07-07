#pragma once

namespace nn { namespace nex { 

class PRUDPEndPointTemplateImp
{
public:
    PRUDPEndPointTemplateImp(nn::nex::Stream::Type);
    ~PRUDPEndPointTemplateImp();
    Init(unsigned int*, unsigned short*);
    CreateSupportedFunctionsFlags(unsigned char, unsigned int);
    GetPacketEncDec();
};

} } 
