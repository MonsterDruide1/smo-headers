#pragma once

namespace nn { namespace nex { 

class NgsFacade
{
public:
    NgsFacade();
    OnTerminate(nn::nex::CallContext*, nn::nex::UserContext const*);
    ~NgsFacade();
    Login(nn::nex::ProtocolCallContext*, unsigned int, char const*, int, unsigned long);
    LoginAndRequestAuthenticationToken(nn::nex::ProtocolCallContext*, unsigned int, char const*, char const*, char*, int, unsigned long);
    LoginAndRequestAuthenticationTokenImpl(nn::nex::ProtocolCallContext*, unsigned int, char const*, char const*, char*, void const*, void const*, int, unsigned long, void const*);
    Login(nn::nex::ProtocolCallContext*, void const*, char const*, int, unsigned long);
    Login(nn::nex::ProtocolCallContext*, unsigned int, char const*, nn::account::UserHandle const&, int);
    Login(nn::nex::ProtocolCallContext*, unsigned int, char const*, nn::account::NetworkServiceAccountId const&, char const*, int);
    TerminateJobIsInProgress() const;
    SetLoginParameters(char const*, int);
    DebugCreateAccount(nn::nex::ProtocolCallContext*, char const*, unsigned short, char const*, char const*, char const*, int);
    DebugCreateAccount(nn::nex::ProtocolCallContext*, char const*, char const*, char const*, char const*, int);
    Logout(nn::nex::ProtocolCallContext*);
    TestConnectivity(nn::nex::ProtocolCallContext*);
    LoginJobIsInProgress() const;
    GetLastLoginErrorCodeInner() const;
    GetLastLoginNnResult() const;
    GetLastLoginErrorCodeStruct() const;
    GetNasErrorCode() const;
    GetHttpStatusCode() const;
    TerminateImpl(nn::nex::CallContext*);
};

} } 
