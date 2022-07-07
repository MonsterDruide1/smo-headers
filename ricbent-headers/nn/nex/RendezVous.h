#pragma once

namespace nn { namespace nex { 

class RendezVous
{
public:
    SilentLogin(nn::nex::CallContext*, char const*, char const*, char const*, unsigned short, nn::nex::Credentials**);
    SilentLogin(nn::nex::CallContext*, char const*, char const*, char const*, nn::nex::Credentials**);
    SilentLogout(nn::nex::CallContext*, nn::nex::Credentials*);
    RendezVous();
    ~RendezVous();
    Login(nn::nex::CallContext*, char const*, char const*, char const*, unsigned short, nn::nex::Credentials**, nn::nex::String*);
    Login(nn::nex::CallContext*, char const*, char const*, char const*, nn::nex::Credentials**, nn::nex::String*);
    Login(nn::nex::CallContext*, char const*, char const*, char const*, unsigned short, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, nn::nex::Credentials**, nn::nex::String*);
    Login(nn::nex::CallContext*, char const*, char const*, char const*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, nn::nex::Credentials**, nn::nex::String*);
    Logout(nn::nex::Credentials*);
    Logout(nn::nex::CallContext*, nn::nex::Credentials*);
    GetGameServerTime(nn::nex::DateTime*) const;
    GetServerTime(nn::nex::DateTime*) const;
};

} } 
