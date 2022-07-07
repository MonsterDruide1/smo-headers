#pragma once

namespace nn { namespace nex { 

class JobHttpBuffered
{
public:
    Initialize(unsigned int, nn::nex::String const&, nn::nex::HttpConnection::Method, unsigned long, nn::nex::qVector<unsigned char>*, int*);
    Initialize(unsigned int, nn::nex::String const&, nn::nex::HttpConnection::Method, unsigned int, nn::nex::qVector<unsigned char> const&, nn::nex::qMap<nn::nex::String, nn::nex::String> const&, unsigned long, nn::nex::qVector<unsigned char>*, int*);
    JobHttpBuffered();
    ~JobHttpBuffered();
    ProcessResponseHeader(nn::nex::HttpConnection*, int);
    ProcessResponse(unsigned char const*, unsigned long);
    PostChunkedBuffer(nn::nex::HttpConnection*, unsigned char*, unsigned long, bool*);
    PrepareRequest(nn::nex::HttpConnection*);
    Initialize(unsigned int, nn::nex::String const&, nn::nex::HttpConnection::Method, nn::nex::HttpEventListener*, unsigned long);
};

} } 
