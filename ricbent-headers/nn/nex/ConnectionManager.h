#pragma once

namespace nn { namespace nex { 

class ConnectionManager
{
public:
    ConnectionManager(nn::nex::EndPointEventHandler*, nn::nex::Job::JobType, bool, bool);
    ~ConnectionManager();
    SetRouterAddress(nn::nex::InetAddress const&);
    ConfigureEndPointForRouting(nn::nex::EndPoint*);
    Terminate();
    IsTerminated() const;
    IsTerminating() const;
    AttachStream(nn::nex::ConnectionOrientedStream*, bool);
    RegisterConnectionFilter(bool (*)(nn::nex::UserContext const&, nn::nex::Buffer*, nn::nex::Buffer*, nn::nex::EndPoint*), nn::nex::UserContext);
    OpenEndPoint(nn::nex::StationURL const&);
    ConnectImpl(nn::nex::CallContext*, nn::nex::Buffer*, nn::nex::Buffer*, nn::nex::qList<nn::nex::StationURL> const&, nn::nex::EndPoint**, unsigned int, bool, nn::nex::JobConnectEndPoint**);
    Disconnect(nn::nex::EndPoint*);
    Disconnect(nn::nex::CallContext*, nn::nex::EndPoint*);
    FilterConnectionRequest(nn::nex::ConnectionOrientedStream*, nn::nex::StationURL const*, nn::nex::Buffer*, nn::nex::EndPoint*);
    ConnectionRequest(nn::nex::ConnectionOrientedStream*, nn::nex::StationURL const*, nn::nex::Buffer*, nn::nex::EndPoint*);
    ConstructAndAssociateRoutingURL(unsigned short, nn::nex::StationURL, nn::nex::StationURL*);
    Connect(nn::nex::CallContext*, nn::nex::StationURL const&, nn::nex::EndPoint**, unsigned int, nn::nex::JobConnectEndPoint**);
};

} } 
