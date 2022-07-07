#pragma once

namespace nn { namespace nex { 

class BadEvents
{
public:
    BadEvents();
    Reset();
    ~BadEvents();
    SetExpectedEvent(nn::nex::BadEvents::_ID);
    CreateInstance();
    DeleteInstance();
    SignalEvent(nn::nex::BadEvents::_ID);
    ClearExpectedEvent(nn::nex::BadEvents::_ID);
    IsExpected(nn::nex::BadEvents::_ID) const;
    ClearCount(nn::nex::BadEvents::_ID);
    GetCount(nn::nex::BadEvents::_ID) const;
    GlobalNewDeleteAllowed();
    Signal(nn::nex::BadEvents::_ID);
    s_pInstance;
};

} } 
