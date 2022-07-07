#pragma once

namespace nn { namespace nex { 

class Protocol
{
public:
    EndPointDisconnected(nn::nex::EndPoint*);
    FaultDetected(nn::nex::EndPoint*, unsigned int);
    Clone() const;
    Protocol(unsigned int);
    ExtractProtocolKey(nn::nex::Message*, nn::nex::Protocol::_Command&, unsigned short&);
    GetOutgoingConnection() const;
    SetIncomingConnection(nn::nex::EndPoint*);
    IsOldRVDDLVersion(nn::nex::EndPoint*);
    ExtractCallOutcome(nn::nex::Message*, nn::nex::qResult*);
    RetrieveCallContext(nn::nex::Message*);
    SetProtocolID(unsigned short);
    RegisterCallContext(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    AddMethodID(nn::nex::Message*, unsigned int);
    FlagIsSet(unsigned int) const;
    ExtractMethodID(nn::nex::Message*);
    SetFlag(unsigned int);
    ~Protocol();
    CopyMembers(nn::nex::Protocol const*);
    AssociateProtocolRequestBroker(nn::nex::ProtocolRequestBrokerInterface*);
    ClearFlag(unsigned int);
    BeginInitialization();
    BeginTermination();
    AddCallOutcome(nn::nex::Message*, nn::nex::qResult);
    ExtractCallContextID(nn::nex::Message*);
    AddCallContextID(nn::nex::Message*, unsigned int);
    AddCallResponse(nn::nex::Message*, nn::nex::CallProtocolMethodOperation*, unsigned int, nn::nex::Message const&);
    AddProtocolKey(nn::nex::Message*, nn::nex::Protocol::_Command, unsigned short);
    AddAlternativePrincipalID(nn::nex::Message*, unsigned long);
    ExtractAlternativePrincipalID(nn::nex::Message*);
    AddSignature(nn::nex::Message*, nn::nex::Buffer const&);
    ExtractSignature(nn::nex::Message*, nn::nex::Buffer&);
    AddOriginalMessage(nn::nex::Message*, nn::nex::Message*);
    ExtractOriginalMessageHeader(nn::nex::Message*, nn::nex::Buffer&);
    GetOperationManager() const;
    GetIncomingConnection() const;
    UseLocalLoopback(unsigned long, unsigned int);
    SetOutgoingConnection(nn::nex::EndPoint*);
    GetCallerPID() const;
    GetCallerCID() const;
    GetOwnPID() const;
    GetCurrentOperation();
    GetType() const;
    IsAKindOf(char const*) const;
    EnforceDeclareSysComponentMacro();
};

} } 
