#pragma once

namespace nn { namespace nex { 

class ClientProtocolRequestBroker
{
public:
    ClientProtocolRequestBroker();
    ~ClientProtocolRequestBroker();
    ProcessMessage(nn::nex::CallProtocolMethodOperation*, nn::nex::EndPoint*, nn::nex::Buffer*);
    ProcessMessageCore(nn::nex::CallProtocolMethodOperation*, nn::nex::EndPoint*, nn::nex::Buffer*);
    GetCurrentOperation();
    DispatchCallToProtocol(nn::nex::ServerProtocol*, nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProcessLocalCallRequest(nn::nex::ServerProtocol*, nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProcessCallRequest(unsigned short, nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProcessCallResponse(unsigned short, nn::nex::Message*, nn::nex::EndPoint*);
    PeerDisconnected(nn::nex::EndPoint*);
    FaultDetection(nn::nex::EndPoint*, unsigned int);
    SystemStateIsValid(bool);
    RegisterServerProtocol(unsigned short, nn::nex::ServerProtocol*);
    UnregisterServerProtocol(unsigned short);
    GetServerProtocol(unsigned short);
    RegisterProtocol(nn::nex::Protocol*);
    UnregisterProtocol(nn::nex::Protocol*);
    GetProtocol(unsigned short, nn::nex::Protocol::_Type);
    CloneProtocols();
    DispatchLocalRMC(nn::nex::Message*, nn::nex::ClientProtocol*, nn::nex::ServerProtocol*, nn::nex::EndPoint*);
    DispatchBlockingLocalRMC(nn::nex::Message*, nn::nex::ClientProtocol*, nn::nex::ServerProtocol*, nn::nex::EndPoint*);
    DispatchThreadSafeLocalRMC(nn::nex::Message*, nn::nex::ClientProtocol*, nn::nex::ServerProtocol*, nn::nex::EndPoint*);
};

} } 
