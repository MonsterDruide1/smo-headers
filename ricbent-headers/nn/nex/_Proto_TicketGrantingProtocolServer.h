#pragma once

namespace nn { namespace nex { 

class _Proto_TicketGrantingProtocolServer
{
public:
    DispatchProtocolMessage(nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProtoStub_ValidateAndRequestTicket(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_TicketGrantingProtocolServer*);
    ProtoStub_ValidateAndRequestTicketWithCustomData(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_TicketGrantingProtocolServer*);
    ProtoStub_RequestTicket(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_TicketGrantingProtocolServer*);
    ProtoStub_GetName(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_TicketGrantingProtocolServer*);
    ~_Proto_TicketGrantingProtocolServer();
};

} } 
