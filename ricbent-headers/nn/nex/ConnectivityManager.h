#pragma once

namespace nn { namespace nex { 

class ConnectivityManager
{
public:
    ConnectivityManager();
    ~ConnectivityManager();
    GetInstance();
    GetInstanceWithoutNetworkCheck();
    GetPublicURL(nn::nex::StationURL::URLType, nn::nex::StationURL*);
    FetchPublicURL(nn::nex::CallContext*, nn::nex::StationURL::URLType);
    RegisterTransportAdapter(nn::nex::NATTransportAdapter*);
    UnregisterTransportAdapter();
    RegisterConnectivityTester(nn::nex::ConnectivityTester*);
    UnregisterConnectivityTester();
    SetProbeLifetime(int);
    SetProbeKeepAlive(int);
    ProbeStations(nn::nex::CallContext*, nn::nex::StationProbeList*, unsigned int, bool);
    OnStartNATSession(nn::nex::CallContext*);
    StartNATSession();
    StartNATSession(nn::nex::CallContext*);
    StartNATSessionInternal(nn::nex::CallContext*);
    SetRelayPublicAddress();
    StopNATSession();
    IsNATSessionStarted();
    CheckUnupdateNATPort();
    InitiateProbes(nn::nex::StationProbeList&);
    SetSuspendBossDaemonOnNATSession(bool);
    GetSuspendBossDaemonOnNATSession();
    s_bSuspendBossDaemonOnNATSession;
};

} } 
