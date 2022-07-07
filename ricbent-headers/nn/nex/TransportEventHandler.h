#pragma once

namespace nn { namespace nex { 

class TransportEventHandler
{
public:
    TransportEventHandler();
    ~TransportEventHandler();
    Receive(nn::nex::ConnectionOrientedStream*, nn::nex::Buffer*, nn::nex::StationURL const*);
    ReceiveBroadcast(nn::nex::ConnectionOrientedStream*, nn::nex::Buffer*, nn::nex::StationURL const*);
    DeviceDiscovery(nn::nex::ConnectionOrientedStream*, char*);
    ConnectionRequest(nn::nex::ConnectionOrientedStream*, nn::nex::StationURL const*, nn::nex::Buffer*, nn::nex::EndPoint*);
    SwitchToRoutingConnection(nn::nex::EndPoint*);
};

} } 
