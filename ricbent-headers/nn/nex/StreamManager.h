#pragma once

namespace nn { namespace nex { 

class StreamManager
{
public:
    StreamManager(nn::nex::Stream::Type, nn::nex::RootTransport*);
    SetStreamKey();
    ~StreamManager();
    Cleanup();
    Initialize(unsigned short, unsigned char, unsigned int);
    InitializeImpl(unsigned short, unsigned char, unsigned int);
    Terminate();
    IsTerminated() const;
    AssociateSecureStream(nn::nex::ConnectionOrientedStream*, bool (*)(nn::nex::UserContext const&, nn::nex::Buffer*, nn::nex::Buffer*, nn::nex::EndPoint*));
    ClearAssociatedSecureStream();
    SetMaxSilenceTimeout(unsigned int);
    SetKeepAliveTimeout(unsigned int);
    EmulateSymmetricNAT();
    SimulateFault(unsigned long);
    SetSandboxAccessKey(nn::nex::String const&);
    GetSandboxAccessKey();
    SetProtocolRequestBroker(nn::nex::ProtocolRequestBrokerInterface*);
    SetCredentials(nn::nex::Credentials*);
    s_szSandboxAccessKey;
    s_uiProtocolVersion;
    s_fPacketDropProbability;
};

} } 
