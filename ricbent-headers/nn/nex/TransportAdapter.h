#pragma once

namespace nn { namespace nex { 

class TransportAdapter
{
public:
    TraceInetAddress(unsigned long, nn::nex::InetAddress*);
    IsSendMultiAddress(nn::nex::InetAddress const*);
    TransportAdapter();
    ~TransportAdapter();
    SetTransportMode(nn::nex::TransportAdapter::ETransportMode);
    GetLocalURLs(nn::nex::qList<nn::nex::StationURL>*);
    SetNetworkInterfaceInfo(nn::nex::InterfaceInfo*);
    Trace(unsigned long);
    SetLocalAddress(nn::nex::String const&);
    SetPortNumber(unsigned short);
    ResolveAddress(nn::nex::CallContext*, nn::nex::StationURL*);
    ReleaseAddress(nn::nex::StationURL const&);
    IsExportableURL(nn::nex::StationURL const&);
    SortAndFilterTargetURLs(nn::nex::qProtectedList<nn::nex::StationURL> const&, nn::nex::qList<nn::nex::StationURL>*);
    GetUniqueMachineID(nn::nex::StationURL const&) const;
    Load();
    Unload();
};

} } 
