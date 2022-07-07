#pragma once

namespace nn { namespace nex { 

class PRUDPLiteMessageV1
{
public:
    PRUDPLiteMessageV1();
    ~PRUDPLiteMessageV1();
    CalcSignatureHelper(nn::nex::Packet const*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Stream::Type, nn::nex::SignatureBytes const*, nn::nex::SignatureBytes&);
    OptionUnpack(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned int);
    CalcExpectedSignature(nn::nex::Packet const*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Key const*, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes const*, nn::nex::SignatureBytes&);
    HeaderParse(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned int&, unsigned int&);
    Unpack(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned long*);
    FastUnpack(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned long*);
    OptionBuilder(nn::nex::PacketOut*);
    Pack(nn::nex::PacketOut*, nn::nex::ByteStream*);
    CalcSignature(nn::nex::PacketOut*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Key const*, nn::nex::Stream::Type, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes const*, nn::nex::SignatureBytes&);
    CalcSignature(nn::nex::Packet*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Key const*, nn::nex::Stream::Type, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes const*, nn::nex::SignatureBytes&);
    DecideSignatureMethod(nn::nex::Packet const*, nn::nex::Stream::Type, bool);
};

} } 
