#pragma once

namespace nn { namespace nex { 

class ClosedSocketInfo
{
public:
    ~ClosedSocketInfo();
    operator=(nn::nex::ClosedSocketInfo&&);
};

} } 
