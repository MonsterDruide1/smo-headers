#pragma once

namespace nn { namespace nex { 

class JobWaitForNotification
{
public:
    JobWaitForNotification();
    ~JobWaitForNotification();
    Start(nn::nex::ProtocolCallContext*, unsigned int, unsigned int, int, unsigned long, nn::nex::NotificationEvent*);
    StartImpl(nn::nex::ProtocolCallContext*, unsigned int, unsigned int, int, unsigned long, nn::nex::NotificationEventFilterInterface**, nn::nex::NotificationEvent*);
    Start(nn::nex::ProtocolCallContext*, unsigned int, unsigned int, int, nn::nex::NotificationEventFilterInterface**, nn::nex::NotificationEvent*);
    Initialize(unsigned int, unsigned int, unsigned int, int, unsigned long, nn::nex::NotificationEventFilterInterface**, nn::nex::NotificationEvent*);
    StepWaitingNotify();
    CompleteJob(nn::nex::qResult const&);
};

} } 
