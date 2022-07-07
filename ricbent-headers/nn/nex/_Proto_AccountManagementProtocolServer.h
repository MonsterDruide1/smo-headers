#pragma once

namespace nn { namespace nex { 

class _Proto_AccountManagementProtocolServer
{
public:
    DispatchProtocolMessage(nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProtoStub_CreateAccount(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_DisableAccount(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_GetName(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_GetAccountData(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_GetPublicData(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_GetMultiplePublicData(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_UpdateCustomData(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_FindByNameRegex(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_UpdateAccountExpiryDate(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_UpdateAccountEffectiveDate(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_GetStatus(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_GetLastConnectionStats(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_CreateAccountWithCustomData(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_RetrieveAccount(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_UpdateAccount(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_ChangePasswordByGuest(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_FindByNameLike(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_CustomCreateAccount(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_NintendoCreateAccount(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ProtoStub_LookupOrCreateAccount(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_AccountManagementProtocolServer*);
    ~_Proto_AccountManagementProtocolServer();
};

} } 
