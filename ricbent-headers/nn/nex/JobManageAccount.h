#pragma once

namespace nn { namespace nex { 

class JobManageAccount
{
public:
    JobManageAccount(unsigned int, nn::nex::AccountManagementProtocolClient*, nn::nex::String const&, nn::nex::String const&, unsigned int, nn::nex::String const&, nn::nex::qResult*, nn::nex::JobManageAccount::FuncType, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*, unsigned long*, nn::nex::String*);
    PasswordInitialHash();
    JobManageAccount(unsigned int, nn::nex::AccountManagementProtocolClient*, nn::nex::String const&, bool*, nn::nex::JobManageAccount::FuncType);
    JobManageAccount(unsigned int, nn::nex::AccountManagementProtocolClient*, nn::nex::AccountManagementCommand*);
    ~JobManageAccount();
    Cleanup();
    Cancel();
    PasswordInitialHashCompletion();
    CompleteJob();
    CompleteJobImpl(nn::nex::CallContext::State, nn::nex::qResult);
    CallAccountManagementCommand();
    CallChangePassword();
    CallCreateAccount();
    CallCreateAccountWithCustomData();
    CallUpdateAccount();
    CallChangePasswordByGuest();
    CallCustomCreateAccount();
    CallNintendoCreateAccount();
};

} } 
