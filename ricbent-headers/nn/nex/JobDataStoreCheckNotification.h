#pragma once

namespace nn { namespace nex { 

class JobDataStoreCheckNotification
{
public:
    JobDataStoreCheckNotification();
    ~JobDataStoreCheckNotification();
    Initialize(unsigned int, nn::nex::DataStoreLogicServerClientInterface*, unsigned int, int, nn::nex::String const&, nn::nex::String*, unsigned long, unsigned long*, unsigned int, unsigned int*, unsigned long, bool*, bool);
    StepLogicServerGetNotificationUrl();
    StepFileServerCheckNotificationFile();
    CompleteJob(nn::nex::qResult const&);
    StepWaitingLogicServerGetNotificationUrl();
    StepWaitingFileServerCheckNotificationFile();
    PrepareRequest(nn::nex::HttpConnection*);
    ProcessResponseHeader(nn::nex::HttpConnection*, int);
    ProcessResponse(unsigned char const*, unsigned long);
};

} } 
