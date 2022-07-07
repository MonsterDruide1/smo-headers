#pragma once

namespace nn { namespace nex { 

class Event
{
public:
    Event(nn::nex::EventHandler*, unsigned int, unsigned int);
    ~Event();
    SetType(unsigned int);
    GetType();
    Set();
    IsSet();
    Reset();
    SetContext(unsigned int);
    GetContext();
    GetEventHandler();
    GetPlatformSpecificEvent();
};

} } 
