#pragma once

namespace nn { namespace nex { 

class DataStoreHppClient
{
public:
    DataStoreHppClient();
    ~DataStoreHppClient();
    Request(nn::nex::CallContext*, nn::nex::ClientProtocol*, nn::nex::Buffer const&, unsigned int, unsigned long, nn::nex::String const&, nn::nex::String const&, nn::nex::String const&, int, nn::nex::ServiceHttpClient::PriorityType);
};

} } 
