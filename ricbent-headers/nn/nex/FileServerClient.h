#pragma once

namespace nn { namespace nex { 

class FileServerClient
{
public:
    FileServerClient();
    ~FileServerClient();
    ApiImpl(nn::nex::CallContext*, nn::nex::String const&, nn::nex::HttpEventListener*, nn::nex::HttpConnection::Method, unsigned long);
    GetObject(nn::nex::CallContext*, nn::nex::String const&, nn::nex::HttpEventListener*, unsigned long);
    PostObject(nn::nex::CallContext*, nn::nex::String const&, nn::nex::HttpEventListener*, unsigned long);
};

} } 
