#pragma once

namespace nn { namespace nex { 

class Router
{
public:
    EnableRouting(bool);
    AddRoute(nn::nex::InetAddress const&, nn::nex::InetAddress const&, bool);
    ConstructAndAssociateRoutingAddress(unsigned short, nn::nex::InetAddress, nn::nex::InetAddress*);
    Clean();
    SetTransport(nn::nex::RootTransport*);
    ShouldRoute(nn::nex::InetAddress const*);
    RouteMessage(nn::nex::Buffer*, nn::nex::InetAddress const*, unsigned short);
    Router();
    ~Router();
    UnregisterStream();
    GetMTU();
    HasRoute(nn::nex::InetAddress const*, nn::nex::InetAddress const*);
    GetRoutingIPAddressTemplate();
};

} } 
