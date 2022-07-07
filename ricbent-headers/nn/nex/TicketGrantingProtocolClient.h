#pragma once

namespace nn { namespace nex { 

class TicketGrantingProtocolClient
{
public:
    TicketGrantingProtocolClient(unsigned short);
    ValidateAndRequestTicket_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qResult*, nn::nex::String const&, unsigned long*, nn::nex::Buffer*, nn::nex::RVConnectionData*, nn::nex::String*);
    ProtoReturn_ValidateAndRequestTicket(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ValidateAndRequestTicketWithCustomData_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qResult*, nn::nex::String const&, unsigned long*, nn::nex::Buffer*, nn::nex::RVConnectionData*, nn::nex::String*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, nn::nex::String*);
    ProtoReturn_ValidateAndRequestTicketWithCustomData(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    RequestTicket_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qResult*, unsigned long const&, unsigned long const&, nn::nex::Buffer*, nn::nex::String*);
    ProtoReturn_RequestTicket(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetPID_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned long*, nn::nex::String const&);
    ProtoReturn_GetPID(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetName_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::String*, unsigned long const&);
    ProtoReturn_GetName(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    CallValidateAndRequestTicket(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::String const&, unsigned long*, nn::nex::Buffer*, nn::nex::RVConnectionData*, nn::nex::String*);
    CallValidateAndRequestTicketWithCustomData(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::String const&, unsigned long*, nn::nex::Buffer*, nn::nex::RVConnectionData*, nn::nex::String*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, nn::nex::String*);
    CallRequestTicket(nn::nex::ProtocolCallContext*, nn::nex::qResult*, unsigned long const&, unsigned long const&, nn::nex::Buffer*, nn::nex::String*);
    CallGetPID(nn::nex::ProtocolCallContext*, unsigned long*, nn::nex::String const&);
    CallGetName(nn::nex::ProtocolCallContext*, nn::nex::String*, unsigned long const&);
    ExtractCallSpecificResults(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ~TicketGrantingProtocolClient();
    CreateResponder() const;
    s_protoReturnFunctions;
};

} } 
