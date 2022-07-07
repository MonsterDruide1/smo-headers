#pragma once

namespace nn { namespace nex { 

class BackEndServices
{
public:
    EffectiveTimeoutIsSet() const;
    SetEffectiveLoginTimeout(int);
    BackEndServices();
    ~BackEndServices();
    Terminate(nn::nex::CallContext*);
    SetSandboxAccessKey(nn::nex::String const&);
    SetProtocolVersion(unsigned int);
    AcceptRemoteTraces();
    UpdateRemoteLogDeviceServer();
    IgnoreRemoteTraces();
    IsConnected() const;
    GetSecureConnectionClient() const;
    Disconnect(nn::nex::CallContext*);
    InitStreamManagerFactory(nn::nex::StreamManager* (*)());
    InitStreamManagerInitializationFlagSpecifier(unsigned int (*)(bool));
    InitStreamManagerInitializationLocalPortSpecifier(unsigned short (*)(bool));
    LoginImpl(nn::nex::CallContext*, nn::nex::qResult*, char const*, char const*, char const*, unsigned short, char const*, nn::nex::Credentials**, nn::nex::String*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*);
    CancelLoginJob();
    RegisterNotificationEventHandler(nn::nex::NotificationEventHandler*);
    RegisterNintendoNotificationEventHandler(nn::nex::NintendoNotificationEventHandler*);
    UnregisterNotificationEventHandler(nn::nex::NotificationEventHandler*);
    UnregisterNintendoNotificationEventHandler(nn::nex::NintendoNotificationEventHandler*);
    ReleaseCredentials();
    PostLogoutCleanup();
    Logout_(nn::nex::Credentials*);
    OnLogoutStart(nn::nex::CallContext&);
    Logout_(nn::nex::CallContext*, nn::nex::Credentials*);
    LogoutImpl(nn::nex::CallContext*, nn::nex::Credentials*);
    ValidatePassword(char const*);
    RegisterPreTerminateCallback(void (*)(nn::nex::CallContext*, nn::nex::UserContext const*), nn::nex::UserContext const&);
    TerminateCB(nn::nex::CallContext*, nn::nex::UserContext const*);
    TerminateImpl();
    TerminateJobIsInProgress() const;
    LoginJobIsInProgress() const;
    LogoutJobIsInProgress() const;
    GetStreamManagerForSecure() const;
    GetSecureStream() const;
    GetAuthenticationClient() const;
    GetResultFacilityCore(unsigned int);
    GetResultFacilityTransport(unsigned int);
    GetResultFacilityRendezVous(unsigned int);
    GetResultFacilityPythonCore(unsigned int);
    GetResultFacilityFriends(unsigned int);
    FormatQErrorCodeString(nn::nex::String const&, unsigned int);
    SetNotificationEventTraceFlags(unsigned long);
    GetNotificationEventTraceFlags();
    GetNintendoNotificationEventTraceFlags();
    OnLoginStart(nn::nex::CallContext&);
    RegisterOperationOnCallContext(nn::nex::CallContext&, nn::nex::RendezVousOperation&);
    GetWellKnownPortNumber() const;
    GetProtocolRegistry() const;
    RegisterServerProtocols();
    UnregisterServerProtocols();
    EnableLoginDataCache();
    DisableLoginDataCache();
    IsAbleLoginDataCache();
    m_hCustomData;
    s_IsAbleLoginDataCache;
};

} } 
