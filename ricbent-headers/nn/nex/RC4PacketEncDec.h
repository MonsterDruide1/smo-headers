#pragma once

namespace nn { namespace nex { 

class RC4PacketEncDec
{
public:
    RC4PacketEncDec();
    ~RC4PacketEncDec();
    Encode(nn::nex::Packet*, nn::nex::Stream::Type, bool);
    Decode(nn::nex::Packet*);
    GetEncryptionKey();
    GenerateKey(nn::nex::Key const&, unsigned char const*, unsigned char const*, nn::nex::Key*);
    SetEncryptionKey(nn::nex::Key const&);
    SetUnreliableEncryptionKey(nn::nex::Key const&);
    DecideMaxUserReliableSubStreams(unsigned short);
    ReinitUserReliableSubStreams();
    SetReliableEncryptionKey(nn::nex::Key const&, unsigned char, unsigned char);
};

} } 
