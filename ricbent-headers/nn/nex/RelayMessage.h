#pragma once

namespace nn { namespace nex { 

class RelayMessage
{
public:
    SetRelayDataPacketSignatureKeyFromP2PDataPacketSessionSignatureKey(nn::nex::qVector<unsigned char> const&);
    RelayMessage();
    CalcSignature(nn::nex::SignatureBytes*, nn::nex::RelayType, unsigned char const*, unsigned long, unsigned char const*, unsigned char const*, unsigned long);
    Unpack(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned long*);
    Unpack(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned char const*, unsigned long, unsigned long*);
    UnpackWithoutValidation(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned long*, bool);
    CheckSignature(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned char const*, unsigned long);
    CheckTimeStamp(nn::nex::PacketIn*);
    UnpackPing(nn::nex::PacketIn*);
    UnpackPayload(nn::nex::ByteStream const*, nn::nex::PacketIn*);
    GetCurrentTimeStamp();
    CheckRelayTypeFlags(nn::nex::PacketIn*);
    Pack(nn::nex::PacketOut*, nn::nex::ByteStream*);
    PackPing(nn::nex::PacketOut*);
    Pack(nn::nex::PacketOut*, nn::nex::ByteStream*, unsigned char const*, unsigned long);
    SetRelayDataPacketSignatureKey(nn::nex::qBuffer*);
    SetRelayDataPacketSignatureKey(unsigned char const*, unsigned long);
    ~RelayMessage();
    CalcSignature(nn::nex::PacketOut*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Key const*, nn::nex::Stream::Type, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes const*, nn::nex::SignatureBytes&);
    CalcSignature(nn::nex::Packet*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Key const*, nn::nex::Stream::Type, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes const*, nn::nex::SignatureBytes&);
    DecideSignatureMethod(nn::nex::Packet const*, nn::nex::Stream::Type, bool);
    CalcExpectedSignature(nn::nex::Packet const*, nn::nex::PRUDPMessageInterface::SignatureMethod, nn::nex::Key const*, nn::nex::TransportSignatureGenerator*, nn::nex::SignatureBytes const*, nn::nex::SignatureBytes&);
    FastUnpack(nn::nex::ByteStream*, nn::nex::PacketIn*, unsigned long*);
    SIGNATURE_SIZE;
    HEADER_SIZE;
    PING_HEADER_SIZE;
    GAMESERVER_XOR_ID;
    GATHERING_XOR_ID;
    MAX_SIGNED_PAYLOAD_SIZE_RELAYTYPE_RELAYDATA;
    VALID_TIMESTAMP_RANGE;
    TEST_GAME_SERVER_ID;
    PACKET_LOSS_CHECK_SERVER_ID;
};

} } 
