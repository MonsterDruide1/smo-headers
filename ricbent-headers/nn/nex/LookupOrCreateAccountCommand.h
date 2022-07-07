#pragma once

namespace nn { namespace nex { 

class LookupOrCreateAccountCommand
{
public:
    LookupOrCreateAccountCommand(nn::nex::DebugString const&, nn::nex::AccountManagementProtocolClient*, nn::nex::String const&, nn::nex::String const&, nn::nex::String const&, unsigned int, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*, unsigned long*);
    ~LookupOrCreateAccountCommand();
    InvokeImpl(nn::nex::ProtocolCallContext*);
};

} } 
