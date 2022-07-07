#pragma once

namespace nn { namespace nex { 

class Stream
{
public:
    Stream(nn::nex::Stream::Type);
    ~Stream();
    StreamTypeToTransportProtocolType(nn::nex::Stream::Type);
    GetTypeName(nn::nex::Stream::Type);
    ResetSettings();
    IsDuplicateReorderingPacket(nn::nex::Packet*);
    DEFAULT_RV_TRANSPORT_PROTOCOL_TYPE;
    s_rvTranportProtocolType;
    s_oStreamSettings;
};

} } 
