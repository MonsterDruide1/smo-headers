#pragma once

namespace nn { namespace nex { 

class GuestCustomCreateAccountCommand
{
public:
    ~GuestCustomCreateAccountCommand();
    GuestCustomCreateAccountCommand(nn::nex::DebugString const&, nn::nex::SandboxConnectionInfo const&, nn::nex::String const&, nn::nex::String const&, nn::nex::String const&, unsigned int, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*, unsigned long*);
    InvokeImpl(nn::nex::ProtocolCallContext*);
};

} } 
