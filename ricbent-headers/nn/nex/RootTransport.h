#pragma once

namespace nn { namespace nex { 

class RootTransport
{
public:
    GetWellKnownPortNumber();
    GetNATProperties() const;
    SetWellKnownPortNumber(unsigned short);
    GetNextPortNumber();
    SetRelayNameAddress(nn::nex::String&);
    SetUpRelayServer();
    SetNATProperties(nn::nex::NATProperties const&);
    GetNATCheckServerAddresses() const;
    RootTransport();
    ~RootTransport();
    GetRouter();
    GetRelay();
    ExistsRelayTable();
    AttachVNATDevice(nn::nex::VirtualNATDevice*);
    DetachVNATDevice(nn::nex::VirtualNATDevice*);
    SetBlockedAddresses(nn::nex::qList<nn::nex::InetAddress> const&);
    SetInterfaceAddress(char const*);
    GetInterfaceAddress();
    RegisterPacketRecognizer(nn::nex::PacketRecognizer*);
    UnregisterPacketRecognizer(nn::nex::PacketRecognizer*);
    RejectPacket(nn::nex::Buffer*, nn::nex::InetAddress const*);
    SetUpDefaultNATCheckServerInternal();
    SetPrimaryNATCheckServer(char const*, unsigned short, unsigned short);
    SetSecondaryNATCheckServer(char const*, unsigned short, unsigned short);
    SetIsNATCheckServerAddressesSet();
    GetRelayServerAddress(char const*);
    SetUPnPProperties(nn::nex::UPnPProperties const&);
    GetUPnPProperties() const;
    EnableNATCheckSupport(bool);
    IsNATCheckEnabled() const;
    EnableUPnPSupport(bool);
    IsUPnPSupported() const;
    EnableNATPMPSupport(bool);
    IsNATPMPSupported() const;
    SetNATPMPPortOpen(bool);
    IsNATPMPPortOpen() const;
    StopTransportThread();
    Initialize();
    Send(nn::nex::TransportProtocol::Type, nn::nex::StationURL*, nn::nex::Buffer*);
    ClearPacketInPacketBufferPool();
    DEFAULT_RELAY_SERVER_PORT;
    s_uiNATTraversalTimeout;
    s_uiConnectEndPointTimeout;
    s_uiDisconnectEndPointTimeout;
    s_uiTerminateDOCoreTimeout;
    s_uiTerminateImmediatelyTimeout;
    s_uiIOWaitTime;
    s_uiRecvBufferSize;
    s_uiSendBufferSize;
    s_bActiveFaultDetection;
    s_bEnableTransportBufferThreadBufferPool;
    s_TransportBufferPoolNum;
    s_TransportBufferThreadPriority;
    s_TransportBufferThreadSendPriority;
    s_TransportBufferThreadCoreNo;
    s_bEnableReliablePacketHistoryBundling;
    s_bEnableUnreliablePacketHistoryBundling;
    s_bEnableDOPacketHistoryBundling;
    s_packetHistoryBundlingHoldingTime;
    s_packetHistoryBundlingMaxHoldingPackets;
    s_packetHistoryBundlingMaxRetransmitPackets;
    s_packetHistoryBundlingMaxRetransmitCounts;
    s_packetHistoryBundlingForcedRetransmitTimeout;
    s_packetHistoryBundlingMaximumPacketBytes;
    s_uiRoutingHistoryTTL;
    s_NameResolveThreadPriority;
    s_NameResolveThreadCoreNo;
    s_uiIdleSleepTime;
    s_bEnableDropDuplicateReorderingUnreliablePackets;
    s_bEnablePacketHistoryBundling;
    s_packetHistoryBundlingPacketCounts;
    s_uiRoutingHistoryUpdateSpan;
    s_uiRoutingLimit;
    s_dropIPList;
    s_bEnableRelay;
};

} } 
