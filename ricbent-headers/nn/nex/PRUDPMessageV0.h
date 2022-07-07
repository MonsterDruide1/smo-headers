#pragma once

namespace nn { namespace nex { 

class PRUDPMessageV0
{
public:
    PRUDPMessageV0();
    ~PRUDPMessageV0();
    CalcSignatureHelper(nn::nex::Packet const*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Key const*, nn::nex::Stream::Type, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes&);
    CalcSignature(nn::nex::PacketOut*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Key const*, nn::nex::Stream::Type, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes const*, nn::nex::SignatureBytes&);
    CalcSignature(nn::nex::Packet*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Key const*, nn::nex::Stream::Type, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes const*, nn::nex::SignatureBytes&);
    DecideSignatureMethod(nn::nex::Packet const*, nn::nex::Stream::Type, bool);
    CalcExpectedSignature(nn::nex::Packet const*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Key const*, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes const*, nn::nex::SignatureBytes&);
    Unpack(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned long*);
    FastUnpack(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned long*);
    Pack(nn::nex::PacketOut*, nn::nex::ByteStream*);
};

} } 
