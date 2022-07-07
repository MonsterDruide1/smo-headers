#pragma once

namespace nn { namespace nex { 

class EventHandler
{
public:
    SetEvent(nn::nex::Event*);
    EventSet(nn::nex::Event*) const;
    ResetEvent(nn::nex::Event*);
    GetPlatformSpecificEvent(nn::nex::Event*);
    EventHandler(unsigned short);
    ~EventHandler();
    CreateEventObject(unsigned int, unsigned int);
    DeleteEventObject(nn::nex::Event*);
    GetEventIndex(nn::nex::Event*) const;
    GetSignaledEvent() const;
    WaitForEvent(unsigned int, nn::nex::Event**) const;
    WaitForBoolEvent(unsigned int, nn::nex::Event**, bool) const;
    WaitForEventOrTimeOut(unsigned int, nn::nex::Event**) const;
};

} } 
