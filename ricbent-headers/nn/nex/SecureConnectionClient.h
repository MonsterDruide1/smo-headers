#pragma once

namespace nn { namespace nex { 

class SecureConnectionClient
{
public:
    RegisterURLsEx(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::StationURL*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&);
    SecureConnectionClient();
    ~SecureConnectionClient();
    UpdateProtocolsDefaultCredentials(nn::nex::Credentials*);
    TestConnectivity(nn::nex::ProtocolCallContext*);
    PrepareURLs(nn::nex::qList<nn::nex::StationURL>&);
    RegisterURLs(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::StationURL*);
    UpdateURLs(nn::nex::ProtocolCallContext*);
    ReplaceURL(nn::nex::ProtocolCallContext*, nn::nex::StationURL const&, nn::nex::StationURL const&);
    RequestConnectionData(nn::nex::ProtocolCallContext*, unsigned int, unsigned long, nn::nex::qList<nn::nex::ConnectionData>*);
    RequestURLs(nn::nex::ProtocolCallContext*, unsigned int, unsigned long, nn::nex::qList<nn::nex::StationURL>*);
    RequestURLs(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::qList<nn::nex::StationURL>*);
    SendReport(unsigned int, void const*, unsigned int);
};

} } 
