#pragma once

namespace nn { namespace nex { 

class MyNotificationEventHandler
{
public:
    ~MyNotificationEventHandler();
    ProcessNotificationEvent(nn::nex::NotificationEvent const&);
    SetEventParam1(unsigned long);
};

} } 
