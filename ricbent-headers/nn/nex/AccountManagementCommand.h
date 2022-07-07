#pragma once

namespace nn { namespace nex { 

class AccountManagementCommand
{
public:
    AccountManagementCommand(nn::nex::DebugString const&, nn::nex::String const&);
    ~AccountManagementCommand();
    Invoke(nn::nex::ProtocolCallContext*);
    GetDescription() const;
};

} } 
