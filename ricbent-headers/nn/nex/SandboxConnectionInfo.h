#pragma once

namespace nn { namespace nex { 

class SandboxConnectionInfo
{
public:
    GetCredentialsProd() const;
    SandboxConnectionInfo();
    SandboxConnectionInfo(nn::nex::SandboxConnectionInfo::HostCredentials const&);
    CheckSettings(nn::nex::SandboxConnectionInfo::HostCredentials const&, nn::nex::String const&);
    SandboxConnectionInfo(nn::nex::String const&, unsigned short, nn::nex::String const&, nn::nex::String const&);
    SandboxConnectionInfo(nn::nex::SandboxConnectionInfo::HostCredentials const&, nn::nex::SandboxConnectionInfo::HostCredentials const&, nn::nex::SandboxConnectionInfo::HostCredentials const&);
    ~SandboxConnectionInfo();
    GetCredentialsDev() const;
    SetCredentialsDev(nn::nex::SandboxConnectionInfo::HostCredentials const&);
    GetCredentialsCert() const;
    SetCredentialsCert(nn::nex::SandboxConnectionInfo::HostCredentials const&);
    SetCredentialsProd(nn::nex::SandboxConnectionInfo::HostCredentials const&);
    SetCredentialsProd(nn::nex::SandboxConnectionInfo::HostCredentials const&, nn::nex::SandboxConnectionInfo::HostCredentials const&);
    GetIssuerID();
    Trace(unsigned long) const;
    s_uiIssuerID;
};

} } 
