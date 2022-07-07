#pragma once

namespace nn { namespace nex { 

class EndPoint
{
public:
    Close();
    _Close();
    EndPoint(nn::nex::ConnectionOrientedStream*, nn::nex::StationURL const*);
    ~EndPoint();
    SetConnectionID(unsigned int);
    SetPrincipalID(unsigned long);
    Open();
    _Open();
    GetConnectionStateString() const;
    RegisterEventHandler(nn::nex::EndPointEventHandler*);
    SetBroadcastState(nn::nex::EndPoint::_BroadcastState);
    DisableKeepAlive();
    SetErrorHolder(nn::nex::FirstErrorHolder*);
    UnsetErrorHolder();
    SignalFaultEvent(nn::nex::NetFaultReason, bool);
};

} } 
