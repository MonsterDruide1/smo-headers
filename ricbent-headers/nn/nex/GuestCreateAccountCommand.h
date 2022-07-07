#pragma once

namespace nn { namespace nex { 

class GuestCreateAccountCommand
{
public:
    GuestCreateAccountCommand(nn::nex::DebugString const&, nn::nex::SandboxConnectionInfo const&, nn::nex::String const&, nn::nex::String const&, nn::nex::String const&, unsigned int);
    ~GuestCreateAccountCommand();
    InvokeImpl(nn::nex::ProtocolCallContext*);
};

} } 
