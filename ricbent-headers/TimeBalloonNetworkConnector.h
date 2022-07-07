#pragma once

class TimeBalloonNetworkConnector
{
public:
    TimeBalloonNetworkConnector(al::NetworkSystem*);
    appear();
    exeConnectToInternet();
    exeConnectToInternetConnected();
    exeConnectToInternetNoHandleError();
    ~TimeBalloonNetworkConnector();
};
