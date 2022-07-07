#pragma once

namespace nn { namespace nex { 

class DummyPacketEncDec
{
public:
    ~DummyPacketEncDec();
    Encode(nn::nex::Packet*, nn::nex::Stream::Type, bool);
    Decode(nn::nex::Packet*);
    SetEncryptionKey(nn::nex::Key const&);
    SetReliableEncryptionKey(nn::nex::Key const&, unsigned char, unsigned char);
    SetUnreliableEncryptionKey(nn::nex::Key const&);
    GetEncryptionKey();
    DecideMaxUserReliableSubStreams(unsigned short);
    ReinitUserReliableSubStreams();
};

} } 
