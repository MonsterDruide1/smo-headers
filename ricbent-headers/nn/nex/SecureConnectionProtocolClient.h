#pragma once

namespace nn { namespace nex { 

class SecureConnectionProtocolClient
{
public:
    SecureConnectionProtocolClient(unsigned short);
    Register_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qResult*, nn::nex::qList<nn::nex::StationURL> const&, unsigned int*, nn::nex::StationURL*);
    ProtoReturn_Register(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    RequestConnectionData_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, bool*, unsigned int const&, unsigned long const&, nn::nex::qList<nn::nex::ConnectionData>*);
    ProtoReturn_RequestConnectionData(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    RequestURLs_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, bool*, unsigned int const&, unsigned long const&, nn::nex::qList<nn::nex::StationURL>*);
    ProtoReturn_RequestURLs(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    RegisterEx_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qResult*, nn::nex::qList<nn::nex::StationURL> const&, unsigned int*, nn::nex::StationURL*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&);
    ProtoReturn_RegisterEx(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    TestConnectivity_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*);
    ProtoReturn_TestConnectivity(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    UpdateURLs_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qList<nn::nex::StationURL> const&);
    ProtoReturn_UpdateURLs(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ReplaceURL_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::StationURL const&, nn::nex::StationURL const&);
    ProtoReturn_ReplaceURL(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    SendReport_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned int const&, nn::nex::qBuffer const&);
    ProtoReturn_SendReport(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    CallRegister(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::qList<nn::nex::StationURL> const&, unsigned int*, nn::nex::StationURL*);
    CallRequestConnectionData(nn::nex::ProtocolCallContext*, bool*, unsigned int const&, unsigned long const&, nn::nex::qList<nn::nex::ConnectionData>*);
    CallRequestURLs(nn::nex::ProtocolCallContext*, bool*, unsigned int const&, unsigned long const&, nn::nex::qList<nn::nex::StationURL>*);
    CallRegisterEx(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::qList<nn::nex::StationURL> const&, unsigned int*, nn::nex::StationURL*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&);
    CallTestConnectivity(nn::nex::ProtocolCallContext*);
    CallUpdateURLs(nn::nex::ProtocolCallContext*, nn::nex::qList<nn::nex::StationURL> const&);
    CallReplaceURL(nn::nex::ProtocolCallContext*, nn::nex::StationURL const&, nn::nex::StationURL const&);
    CallSendReport(nn::nex::ProtocolCallContext*, unsigned int const&, nn::nex::qBuffer const&);
    ExtractCallSpecificResults(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ~SecureConnectionProtocolClient();
    CreateResponder() const;
    s_protoReturnFunctions;
};

} } 
