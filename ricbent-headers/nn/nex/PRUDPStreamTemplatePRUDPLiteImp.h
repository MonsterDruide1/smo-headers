#pragma once

namespace nn { namespace nex { 

class PRUDPStreamTemplatePRUDPLiteImp
{
public:
    PRUDPStreamTemplatePRUDPLiteImp(nn::nex::Stream::Type, nn::nex::PRUDPMessageInterface*);
    ~PRUDPStreamTemplatePRUDPLiteImp();
    GetVersion();
    VersionNegotiation(nn::nex::Packet*, nn::nex::Packet*);
    CalcSendConnectionSignature(nn::nex::Packet*, nn::nex::TransportSignatureGenerator*, unsigned char, nn::nex::SignatureBytes*);
    GetSendConnectionSignature(nn::nex::Packet*, nn::nex::TransportSignatureGenerator*, unsigned char, nn::nex::SignatureBytes*);
    CheckSignature(nn::nex::InetAddress*, unsigned short, unsigned char, nn::nex::Packet*, nn::nex::Key*, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes*, nn::nex::PRUDPMessageInterface::SignatureMethod);
    s_bInitialVersion;
    s_bInitialSupportedFunctionsMinorVersion;
    s_uiInitialSupportedFunctionsOptionMask;
};

} } 
