#pragma once

namespace nn { namespace nex { 

class _DDL_NintendoNotificationEvent
{
public:
    operator=(nn::nex::_DDL_NintendoNotificationEvent const&);
    operator==(nn::nex::_DDL_NintendoNotificationEvent const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_NintendoNotificationEvent const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_NintendoNotificationEvent*);
    ~_DDL_NintendoNotificationEvent();
};

} } 
