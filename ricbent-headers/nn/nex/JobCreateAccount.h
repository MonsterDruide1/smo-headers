#pragma once

namespace nn { namespace nex { 

class JobCreateAccount
{
public:
    JobCreateAccount(unsigned int, char const*, nn::nex::String const&, unsigned short, nn::nex::String const&, nn::nex::String const&, char const*, unsigned int, nn::nex::String const&, nn::nex::JobCreateAccount::FuncType, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*, unsigned long*, nn::nex::String*);
    LoginGuest();
    ~JobCreateAccount();
    CompleteJob(nn::nex::qResult);
    ProcessLoginGuestResult();
    CreateAccount();
    CreateAccountWithCustomData();
    ChangePasswordByGuest();
    CustomCreateAccount();
    NintendoCreateAccount();
    LogoutGuest();
    ProcessCreateAccountResult();
    ProcessLogoutGuestResult();
};

} } 
