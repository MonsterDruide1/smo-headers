#pragma once

class BalloonFindDataStoreConnector
{
public:
    BalloonFindDataStoreConnector(al::NexNetworkStateHolder*, al::LayoutInitInfo const&);
    getNexNetworkStateHolder() const;
    requestConnect();
    reset();
    tryConnect();
    isConnected() const;
    exeWait();
    exeStartProcess();
    exeConnecting();
    exeEndProcessConnected();
    exeEndProcessOffline();
    ~BalloonFindDataStoreConnector();
};
