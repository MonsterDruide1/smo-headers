#pragma once

namespace nn { namespace nex { 

class _Proto_SecureConnectionProtocolServer
{
public:
    DispatchProtocolMessage(nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProtoStub_Register(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_SecureConnectionProtocolServer*);
    ProtoStub_RequestConnectionData(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_SecureConnectionProtocolServer*);
    ProtoStub_RequestURLs(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_SecureConnectionProtocolServer*);
    ProtoStub_RegisterEx(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_SecureConnectionProtocolServer*);
    ProtoStub_UpdateURLs(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_SecureConnectionProtocolServer*);
    ProtoStub_ReplaceURL(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_SecureConnectionProtocolServer*);
    ProtoStub_SendReport(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_SecureConnectionProtocolServer*);
    ~_Proto_SecureConnectionProtocolServer();
};

} } 
