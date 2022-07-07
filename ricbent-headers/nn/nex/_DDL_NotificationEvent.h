#pragma once

namespace nn { namespace nex { 

class _DDL_NotificationEvent
{
public:
    operator=(nn::nex::_DDL_NotificationEvent const&);
    operator==(nn::nex::_DDL_NotificationEvent const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_NotificationEvent const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_NotificationEvent*);
    ~_DDL_NotificationEvent();
};

} } 
