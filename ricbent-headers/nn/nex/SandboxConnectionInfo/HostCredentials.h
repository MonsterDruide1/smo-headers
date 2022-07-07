#pragma once

namespace nn { namespace nex { namespace SandboxConnectionInfo { 

class HostCredentials
{
public:
    HostCredentials();
    HostCredentials(nn::nex::String const&, unsigned short, nn::nex::String const&, nn::nex::String const&);
    IsValid() const;
    Trace(unsigned long) const;
};

} } } 
