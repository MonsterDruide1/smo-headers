#pragma once

namespace nn { namespace nex { 

class HighLevelStream
{
public:
    HighLevelStream(nn::nex::Stream::Type, nn::nex::RootTransport*);
    IsListened();
    ~HighLevelStream();
    Listen(unsigned char);
    CalcSignature(nn::nex::PacketOut*);
    ExpectedSignature(nn::nex::Packet*, nn::nex::SignatureBytes*);
    ReceiveIncomingPacket(unsigned short, unsigned char, nn::nex::Packet*);
    ReceiveIncomingMsg(nn::nex::InetAddress const&, nn::nex::Stream::Type, unsigned char, nn::nex::Buffer*, nn::nex::Time, unsigned short);
    Send(nn::nex::InetAddress const&, nn::nex::Stream::Type, unsigned char, nn::nex::Buffer*, unsigned char, unsigned short);
    DoWork(nn::nex::Time const*);
};

} } 
