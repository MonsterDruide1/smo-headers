#pragma once

namespace nn { namespace nex { 

class StationURL
{
public:
    GetInetAddress() const;
    SetInetAddress(nn::nex::InetAddress const*);
    GetRVConnectionID() const;
    SetPortNumber(unsigned short);
    GetPortNumber() const;
    GetConnectionID() const;
    Trace(unsigned long) const;
    SetProbeRequestID(unsigned int);
    SetUseRelayServer(bool);
    SetRelayServerAddress(nn::nex::String const&);
    SetRelayServerPort(unsigned short);
    GetFastProbeResponse() const;
    GetProbeRequestID() const;
    GetProbeRequestInitiation() const;
    SetFastProbeResponse(bool);
    SetRVConnectionID(unsigned int);
    GetUseRelayServer() const;
    GetRelayAddress() const;
    GetRelayPort() const;
    GetRelayServerAddress() const;
    GetRelayServerPort() const;
    SetProbeRequestInitiation(bool);
    SetRelayAddress(nn::nex::String const&);
    SetRelayPort(unsigned short);
    GetNatTraversalRequesterPrivateAddress() const;
    GetNatTraversalRequesterPrivatePort() const;
    SetURLType(nn::nex::StationURL::URLType);
    operator=(nn::nex::StationURL const&);
    SetStreamType(nn::nex::Stream::Type);
    SetStreamID(unsigned char);
    IsMatching(nn::nex::StationURL const&) const;
    GetAddress() const;
    StationURL();
    StationURL(nn::nex::String const&);
    SetURL(char const*);
    StationURL(char const*);
    StationURL(nn::nex::StationURL const&);
    Copy(nn::nex::StationURL const&);
    operator=(char const*);
    ~StationURL();
    ValidateData() const;
    Parse();
    ValidateStr() const;
    Format();
    GetURLType() const;
    SetAddress(char const*);
    IsLoopbackAddress() const;
    SetNodeId(unsigned short);
    SetParamValue(char const*, unsigned long);
    GetNodeId() const;
    GetParamValue(char const*, unsigned long) const;
    GetStreamType() const;
    GetStreamID() const;
    SetPrincipalID(unsigned long);
    GetPrincipalID() const;
    SetConnectionID(unsigned int);
    SetNATMapping(nn::nex::NATProperties::MappingProperties);
    GetNATMapping() const;
    SetNATFiltering(nn::nex::NATProperties::FilteringProperties);
    GetNATFiltering() const;
    SetUPnPSupport(bool);
    GetUPnPSupport() const;
    SetNatPMPSupport(bool);
    GetNatPMPSupport() const;
    SetType(unsigned int);
    GetType() const;
    SetOptionalUri(nn::nex::String const&);
    GetOptionalUri() const;
    SetTransportProtocolType(nn::nex::TransportProtocol::Type);
    GetTransportProtocolType() const;
    SetPlatformType();
    GetPlatformType() const;
    SetNatTraversalRequesterPrivateAddress(nn::nex::String const&);
    SetNatTraversalRequesterPrivatePort(unsigned short);
    operator=(nn::nex::String const&);
    operator==(nn::nex::StationURL const&) const;
    operator!=(nn::nex::StationURL const&) const;
    Set(nn::nex::String const&, nn::nex::String const&, bool);
    Remove(nn::nex::String const&, bool);
    Get(nn::nex::String const&, nn::nex::String*, bool) const;
    GetURL() const;
    GetURLType(char*, unsigned long) const;
    CopyInSuppliedBuffer(char*, unsigned long, char const*, unsigned long);
    SetParamValue(char const*, unsigned char const*, unsigned long);
    GetParamValue(char const*, unsigned char*, unsigned long) const;
    GetNbParam(bool);
    IsValid() const;
    ParseURLType() const;
    ParseParams(char*, bool);
    ParseParam(char*, bool);
    IsMatchingExceptPort(nn::nex::StationURL const&) const;
    IsAddressMatching(nn::nex::StationURL const&) const;
};

} } 