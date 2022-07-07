#pragma once

namespace nn { namespace nex { 

class HttpClient
{
public:
    HttpClient();
    ~HttpClient();
    Start(nn::nex::CallContext*, nn::nex::String const&, nn::nex::HttpConnection::Method, nn::nex::HttpEventListener*, unsigned long);
    Start(nn::nex::CallContext*, nn::nex::String const&, nn::nex::HttpConnection::Method, unsigned long, nn::nex::qVector<unsigned char>*, int*);
    Start(nn::nex::CallContext*, nn::nex::String const&, nn::nex::HttpConnection::Method, unsigned int, nn::nex::qVector<unsigned char> const&, nn::nex::qMap<nn::nex::String, nn::nex::String> const&, unsigned long, nn::nex::qVector<unsigned char>*, int*);
};

} } 
