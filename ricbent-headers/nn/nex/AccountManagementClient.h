#pragma once

namespace nn { namespace nex { 

class AccountManagementClient
{
public:
    AccountManagementClient();
    ~AccountManagementClient();
    UpdateProtocolsDefaultCredentials(nn::nex::Credentials*);
    CreateAccount(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::String const&, nn::nex::String const&, unsigned int, nn::nex::String const&);
    CreateAccount(nn::nex::ProtocolCallContext*, nn::nex::String const&, nn::nex::String const&, unsigned int, nn::nex::String const&);
    CreateAccount(nn::nex::ProtocolCallContext*, char const*, nn::nex::String const&, unsigned short, nn::nex::String const&, char const*, unsigned int, nn::nex::String const&);
    CreateAccount(nn::nex::ProtocolCallContext*, char const*, nn::nex::String const&, nn::nex::String const&, char const*, unsigned int, nn::nex::String const&);
    CreateAccount(nn::nex::ProtocolCallContext*, char const*, nn::nex::String const&, unsigned short, nn::nex::String const&, char const*, unsigned int, nn::nex::String const&, nn::nex::CustomDataHolder<nn::nex::PublicData> const&, nn::nex::CustomDataHolder<nn::nex::PrivateData> const&);
    CreateAccount(nn::nex::ProtocolCallContext*, char const*, nn::nex::String const&, nn::nex::String const&, char const*, unsigned int, nn::nex::String const&, nn::nex::CustomDataHolder<nn::nex::PublicData> const&, nn::nex::CustomDataHolder<nn::nex::PrivateData> const&);
    CustomCreateAccount(nn::nex::ProtocolCallContext*, char const*, nn::nex::String const&, unsigned short, nn::nex::String const&, char const*, unsigned int, nn::nex::String const&, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, unsigned long*);
    CustomCreateAccount(nn::nex::ProtocolCallContext*, char const*, nn::nex::String const&, nn::nex::String const&, char const*, unsigned int, nn::nex::String const&, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, unsigned long*);
    NintendoCreateAccount(nn::nex::ProtocolCallContext*, char const*, nn::nex::String const&, unsigned short, nn::nex::String const&, char const*, unsigned int, nn::nex::String const&, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, unsigned long*, nn::nex::String*);
    NintendoCreateAccount(nn::nex::ProtocolCallContext*, char const*, nn::nex::String const&, nn::nex::String const&, char const*, unsigned int, nn::nex::String const&, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, unsigned long*, nn::nex::String*);
    ChangePassword(nn::nex::ProtocolCallContext*, char const*, nn::nex::String const&, unsigned short, nn::nex::String const&, nn::nex::String const&, char const*);
    CreateAccount(nn::nex::ProtocolCallContext*, nn::nex::String const&, nn::nex::String const&, unsigned int, nn::nex::String const&, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&);
    CustomCreateAccount(nn::nex::ProtocolCallContext*, nn::nex::String const&, nn::nex::String const&, unsigned int, nn::nex::String const&, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, unsigned long*);
    NintendoCreateAccount(nn::nex::ProtocolCallContext*, nn::nex::String const&, nn::nex::String const&, unsigned int, nn::nex::String const&, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, unsigned long*, nn::nex::String*);
    LookupOrCreateAccount(nn::nex::ProtocolCallContext*, nn::nex::String const&, nn::nex::String const&, unsigned int, nn::nex::String const&, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, unsigned long*);
    ChangePassword(nn::nex::ProtocolCallContext*, nn::nex::String const&, nn::nex::String const&, nn::nex::String const&);
    DisableAccount(nn::nex::ProtocolCallContext*, nn::nex::qResult*, unsigned long, nn::nex::DateTime const&, nn::nex::String const&);
    DisableAccount(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::DateTime const&, nn::nex::String const&);
    DeleteAccount(nn::nex::ProtocolCallContext*, unsigned long);
    DisconnectPrincipal(nn::nex::ProtocolCallContext*, unsigned long);
    DisconnectAllPrincipals(nn::nex::ProtocolCallContext*);
    ChangePassword(nn::nex::ProtocolCallContext*, bool*, nn::nex::String const&);
    ChangePassword(nn::nex::ProtocolCallContext*, nn::nex::String const&);
    TestCapability(nn::nex::ProtocolCallContext*, bool*, unsigned int);
    TestCapability(nn::nex::ProtocolCallContext*, unsigned int);
    UpdateAccountName(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::String const&);
    UpdateAccountName(nn::nex::ProtocolCallContext*, nn::nex::String const&);
    UpdateAccountEmail(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::String const&);
    UpdateAccountEmail(nn::nex::ProtocolCallContext*, nn::nex::String const&);
    UpdateCustomData(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> const&);
    UpdateCustomData(nn::nex::ProtocolCallContext*, nn::nex::CustomDataHolder<nn::nex::PublicData> const&, nn::nex::CustomDataHolder<nn::nex::PrivateData> const&);
    UpdateAccount(nn::nex::ProtocolCallContext*, nn::nex::String const&, nn::nex::String const&, nn::nex::CustomDataHolder<nn::nex::PublicData> const&, nn::nex::CustomDataHolder<nn::nex::PrivateData> const&);
    GetName(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::String*);
    GetAccountData(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::AccountData*);
    GetAccountData(nn::nex::ProtocolCallContext*, nn::nex::AccountData*);
    GetPublicData(nn::nex::ProtocolCallContext*, bool*, unsigned long, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*);
    GetPublicData(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::CustomDataHolder<nn::nex::PublicData>*);
    GetPublicData(nn::nex::ProtocolCallContext*, bool*, nn::nex::qList<unsigned long>, nn::nex::qList<nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> >*);
    GetPublicData(nn::nex::ProtocolCallContext*, nn::nex::qList<unsigned long>, nn::nex::qList<nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String> >*);
    GetPrivateData(nn::nex::ProtocolCallContext*, bool*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*);
    GetPrivateData(nn::nex::ProtocolCallContext*, nn::nex::CustomDataHolder<nn::nex::PrivateData>*);
    RetrieveAccount(nn::nex::ProtocolCallContext*, nn::nex::AccountData*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*);
    FindByNameRegex(nn::nex::ProtocolCallContext*, unsigned int, nn::nex::String const&, nn::nex::ResultRange const&, nn::nex::qList<nn::nex::BasicAccountInfo>*);
    FindByNameLike(nn::nex::ProtocolCallContext*, unsigned int, nn::nex::String const&, nn::nex::ResultRange const&, nn::nex::qList<nn::nex::BasicAccountInfo>*);
    UpdateAccountExpiryDate(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::DateTime const&, nn::nex::String const&);
    UpdateAccountEffectiveDate(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::DateTime const&, nn::nex::String const&);
    UpdateStatus(nn::nex::ProtocolCallContext*, nn::nex::String const&);
    GetStatus(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::String*);
    GetLastConnectionStats(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::DateTime*, nn::nex::DateTime*, nn::nex::DateTime*);
    ResetPassword(nn::nex::ProtocolCallContext*);
};

} } 
