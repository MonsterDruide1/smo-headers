#pragma once

namespace nn { namespace nex { 

class DataStorePostHttpEventListener
{
public:
    DataStorePostHttpEventListener(unsigned int, nn::nex::qVector<nn::nex::DataStoreKeyValue> const&, nn::nex::qVector<nn::nex::DataStoreKeyValue> const&, nn::nex::qVector<unsigned char> const&, unsigned int, unsigned long, unsigned long, unsigned long, unsigned char const*, unsigned long, nn::nex::DataStorePostObjectEventListener*);
    ~DataStorePostHttpEventListener();
    PrepareRequest(nn::nex::HttpConnection*);
    PostChunkedBuffer(nn::nex::HttpConnection*, unsigned char*, unsigned long, bool*);
};

} } 
