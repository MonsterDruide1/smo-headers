#pragma once

namespace al { 

class NexNetworkStateHolder
{
public:
    NexNetworkStateHolder(nn::account::UserHandle*, al::DataStoreDirector*, al::RankingDirector*, al::NexUtilityDirector*);
    ~NexNetworkStateHolder();
    setStateLogin();
    setStateReconnect();
    setStateReconnectNoHandleError();
    setStateLogout();
    isConnecting() const;
    isConnected() const;
    exeBeforeInit();
    exeConnectToInternet();
    exeConnectToInternetNoHandleError();
    exeLoginCheckNSA();
    exeLoginStart();
    exeLoginWait();
    exeBind();
    exeConnected();
    exeLogout();
    exeUnbind();
    exeOffline();
};

} 
