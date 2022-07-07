#pragma once

namespace nn { namespace nex { 

class PRUDPEndPointTemplatePRUDPLiteImp
{
public:
    PRUDPEndPointTemplatePRUDPLiteImp(nn::nex::Stream::Type);
    ~PRUDPEndPointTemplatePRUDPLiteImp();
    Init(unsigned int*, unsigned short*);
    CreateSupportedFunctionsFlags(unsigned char, unsigned int);
    GetPacketEncDec();
};

} } 
