#pragma once

namespace nn { namespace nex { 

class Operation
{
public:
    Operation(unsigned int);
    GetEventString(nn::nex::Operation::Event) const;
    GetUserData();
    SetUserData(nn::nex::UserContext);
    AbortOperation();
    ~Operation();
    GetSignal() const;
    s_pfTraceFilter;
};

} } 
