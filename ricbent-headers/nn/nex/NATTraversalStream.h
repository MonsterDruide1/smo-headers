#pragma once

namespace nn { namespace nex { 

class NATTraversalStream
{
public:
    ~NATTraversalStream();
    SendMsg(nn::nex::StationURL const&, nn::nex::Buffer*, unsigned char);
    NATTraversalStream(nn::nex::NATTraversalEngine*, nn::nex::RootTransport*);
    DoWork(nn::nex::Time const*);
    ReceiveIncomingMsg(nn::nex::InetAddress const&, nn::nex::Stream::Type, unsigned char, nn::nex::Buffer*, nn::nex::Time, unsigned short);
};

} } 
