#pragma once

namespace nn { namespace nex { 

class RemoteLogDeviceProtocolClient
{
public:
    RemoteLogDeviceProtocolClient(unsigned short);
    Log_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::String const&);
    ProtoReturn_Log(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    CallLog(nn::nex::ProtocolCallContext*, nn::nex::String const&);
    ExtractCallSpecificResults(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ~RemoteLogDeviceProtocolClient();
    CreateResponder() const;
    s_protoReturnFunctions;
};

} } 
