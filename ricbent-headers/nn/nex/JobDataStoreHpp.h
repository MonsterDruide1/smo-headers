#pragma once

namespace nn { namespace nex { 

class JobDataStoreHpp
{
public:
    JobDataStoreHpp();
    ~JobDataStoreHpp();
    IsHttpStatusCodeSuccess();
    ResetHttpResult();
    PrepareRequest(nn::nex::HttpConnection*);
    CompleteJob(nn::nex::qResult const&);
    ProcessResponseHeader(nn::nex::HttpConnection*, int);
    ProcessResponse(unsigned char const*, unsigned long);
    PostChunkedBuffer(nn::nex::HttpConnection*, unsigned char*, unsigned long, bool*);
    Initialize(unsigned int, nn::nex::ClientProtocol*, nn::nex::Buffer const&, unsigned int, unsigned long, nn::nex::String const&, nn::nex::String const&, nn::nex::String const&, int, nn::nex::ServiceHttpClient::PriorityType);
    StepRetrieveGameAuthToken();
    PrepareRequestHeaders();
    StepWaitingRetrieveGameAuthToken();
    StepHttp();
    StepWaitingForHttp();
    ProcessFinalResponse(nn::nex::qVector<unsigned char> const&);
};

} } 
