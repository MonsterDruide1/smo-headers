#pragma once

namespace nn { namespace nex { 

class WSClientHandShake
{
public:
    Init();
    GetSendHandShakeMsg(char*, unsigned long, nn::nex::String const&, nn::nex::String const&);
    IsEndResponse(char const*);
    ValidateResponse(char const*, unsigned long, char*, unsigned long, unsigned long*);
    WSClientHandShake(nn::nex::String const&);
    WSClientHandShake();
    ~WSClientHandShake();
};

} } 
