#pragma once

namespace nn { namespace nex { 

class EndPointGroup
{
public:
    EndPointGroup();
    EndPointGroup(nn::nex::ConnectionOrientedStream*);
    ~EndPointGroup();
    AddEndPoint(nn::nex::EndPoint*, unsigned int);
    AddEndPoint(nn::nex::EndPoint*, void (* const*)(nn::nex::EndPointGroup*, nn::nex::Buffer*, nn::nex::UserContext*), nn::nex::UserContext const&, unsigned int);
    RemoveEndPoint(nn::nex::EndPoint*, unsigned int);
    RemoveEndPoint(nn::nex::EndPoint*, void (* const*)(nn::nex::EndPointGroup*, nn::nex::Buffer*, nn::nex::UserContext*), nn::nex::UserContext const&, unsigned int);
    AddEndPointGroup(nn::nex::EndPointGroup*, unsigned int);
    AddEndPointGroup(nn::nex::EndPointGroup*, void (* const*)(nn::nex::EndPointGroup*, nn::nex::Buffer*, nn::nex::UserContext*), nn::nex::UserContext const&, unsigned int);
    RemoveEndPointGroup(nn::nex::EndPointGroup*, unsigned int);
    RemoveEndPointGroup(nn::nex::EndPointGroup*, void (* const*)(nn::nex::EndPointGroup*, nn::nex::Buffer*, nn::nex::UserContext*), nn::nex::UserContext const&, unsigned int);
    GetEndPointGroupIterator();
    Send(nn::nex::Buffer*, unsigned int);
    Send(nn::nex::Buffer*, void (* const*)(nn::nex::EndPointGroup*, nn::nex::Buffer*, nn::nex::UserContext*), nn::nex::UserContext const&, unsigned int);
    Lock();
    Unlock();
};

} } 
