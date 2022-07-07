#pragma once

namespace nn { namespace nex { 

class SendingInfo
{
public:
    SendingInfo(nn::nex::SharedPtr<nn::nex::SocketDriver::Socket>, bool);
    ~SendingInfo();
    operator=(nn::nex::SendingInfo&&);
};

} } 
