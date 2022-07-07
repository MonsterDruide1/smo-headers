#pragma once

namespace nn { namespace nex { 

class ProtocolRequestBroker
{
public:
    ProtocolRequestBroker(nn::nex::ProtocolRequestBroker*);
    ~ProtocolRequestBroker();
    GetProtocol(unsigned short, nn::nex::Protocol::_Type);
    GetServerProtocol(unsigned short);
    CloneProtocols();
    TraceProtocols(unsigned long);
    ProcessMessage(nn::nex::CallProtocolMethodOperation*, nn::nex::EndPoint*, nn::nex::Buffer*);
    ProcessMessageCore(nn::nex::CallProtocolMethodOperation*, nn::nex::EndPoint*, nn::nex::Buffer*);
    DispatchLocalRMC(nn::nex::Message*, nn::nex::ClientProtocol*, nn::nex::ServerProtocol*, nn::nex::EndPoint*);
    DispatchBlockingLocalRMC(nn::nex::Message*, nn::nex::ClientProtocol*, nn::nex::ServerProtocol*, nn::nex::EndPoint*);
    DispatchThreadSafeLocalRMC(nn::nex::Message*, nn::nex::ClientProtocol*, nn::nex::ServerProtocol*, nn::nex::EndPoint*);
    ProcessLocalCallRequest(nn::nex::ServerProtocol*, nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    GetCurrentOperation();
    DispatchCallToProtocol(nn::nex::ServerProtocol*, nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProcessCallRequest(unsigned short, nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProcessCallResponse(unsigned short, nn::nex::Message*, nn::nex::EndPoint*);
    PeerDisconnected(nn::nex::EndPoint*);
    FaultDetection(nn::nex::EndPoint*, unsigned int);
    RegisterProtocol(nn::nex::Protocol*);
    UnregisterProtocol(nn::nex::Protocol*);
    RegisterServerProtocol(unsigned short, nn::nex::ServerProtocol*);
    UnregisterServerProtocol(unsigned short);
    SystemStateIsValid(bool);
};

} } 
