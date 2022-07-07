#pragma once

namespace nn { namespace nex { 

class RemoteLogDeviceServer
{
public:
    RemoteLogDeviceServer();
    ~RemoteLogDeviceServer();
    Log(nn::nex::String const&);
};

} } 
