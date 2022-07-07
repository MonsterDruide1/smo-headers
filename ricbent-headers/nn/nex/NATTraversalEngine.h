#pragma once

namespace nn { namespace nex { 

class NATTraversalEngine
{
public:
    RegisterTransportAdapter(nn::nex::NATTransportAdapter*);
    UnregisterTransportAdapter();
    StartSendDummyPacket();
    ClearProbeList();
    StopSendDummyPacket();
    PrepareNATTraversal(nn::nex::qList<nn::nex::StationURL> const&);
    ReportNATTraversalResult(unsigned int, bool, unsigned int);
    GetURLPingTime(nn::nex::StationURL const&);
    PrepareNATTraversal(nn::nex::StationURL);
    GetProbeFailed(nn::nex::StationURL const&);
    GetUpdatedURL(nn::nex::StationURL const&, nn::nex::StationURL*);
    ReceiveMessage(nn::nex::StationURL const&, unsigned char const*, unsigned long);
    NATTraversalEngine();
    ~NATTraversalEngine();
    Terminate();
    ShouldUseRelay(nn::nex::StationURL const&, bool) const;
    ProcessRequestProbe(nn::nex::StationURL const&);
    StartSendProbe(nn::nex::StationURL const&);
    SendProbe(nn::nex::NATTraversalEngine::Msg, nn::nex::StationURL const&, nn::nex::Time, unsigned char);
    GetCIDPingTime(unsigned int);
    GetNATTraversalResult(unsigned int);
    SendProbes();
    StopProbes();
    CanUseRelay(nn::nex::StationURL const&, bool) const;
    GetNumOfMaxProbes();
    GetNumOfSendingProbes();
    SendDummyPacket(nn::nex::InetAddress const&);
    SendProbeRequests();
    SendDummyPacket(nn::nex::StationURL const&, unsigned char);
    CheckPortAndRelay(nn::nex::qList<nn::nex::StationURL> const&, nn::nex::StationURL const&);
    TimeoutProbeRequest(nn::nex::Time const&);
    Execute();
    SendDummyPacket(unsigned char);
    StartNATStream(nn::nex::RootTransport*);
    StopNATStream();
    RegisterRelay(nn::nex::NATRelayInterface*);
    UnregisterRelay();
    RegisterEcho(nn::nex::NATEchoInterface*);
    UnregisterEcho();
    RegisterConnectivityTester(nn::nex::ConnectivityTester*);
    UnregisterConnectivityTester();
    ReportNATProperties(nn::nex::NATProperties::MappingProperties, nn::nex::NATProperties::FilteringProperties, unsigned int);
    s_tiProbeLifetime;
    s_tiFrequency;
    s_tiProbeKeepAlive;
    g_uiMAX_PROBES_DEFAULT;
    g_ui8LowTTLValue;
    g_ui16DUMMY_PORT_NUMBER;
    g_uiSendDummyPacketInterval;
    g_uiCleanupInterval;
    g_uiProbeRequestTimeout;
    g_uiNUMBER_OF_DUMMY_PACKET;
};

} } 
