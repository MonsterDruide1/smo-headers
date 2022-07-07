#pragma once

namespace nn { namespace nex { 

class JobFileServer
{
public:
    JobFileServer();
    ~JobFileServer();
    IsHttpStatusCodeSuccess();
    ResetHttpResult();
    PrepareRequest(nn::nex::HttpConnection*);
    CompleteJob(nn::nex::qResult const&);
    PostChunkedBuffer(nn::nex::HttpConnection*, unsigned char*, unsigned long, bool*);
    ProcessResponseHeader(nn::nex::HttpConnection*, int);
    ProcessResponse(unsigned char const*, unsigned long);
    Initialize(unsigned int, nn::nex::String const&, nn::nex::HttpConnection::Method, nn::nex::HttpEventListener*, unsigned long);
    StepHttp();
    StepWaitingForHttp();
};

} } 
