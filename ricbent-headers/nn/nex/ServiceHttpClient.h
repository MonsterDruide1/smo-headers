#pragma once

namespace nn { namespace nex { 

class ServiceHttpClient
{
public:
    ServiceHttpClient();
    ~ServiceHttpClient();
    InitializeNfsLibrary() const;
    FinalizeNfsLibrary() const;
    GetPrincipalId(unsigned long&) const;
    GetPassword(nn::nex::String&) const;
    GetNfsSettings(unsigned int&, unsigned char&) const;
    SetSandboxContextImpl(unsigned int, char const*);
    MakeHppUrl() const;
    SetSandboxContext(unsigned int, char const*);
};

} } 
