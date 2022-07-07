#pragma once

namespace nn { namespace nex { 

class BerkeleySocketDriver
{
public:
    ResetAnalyzeInfo();
    LogAnalyzeInfo(nn::nex::EventLog::LogLevel);
    GetAnalyzeInfo();
    GetBoundPort(int);
    GetPeerAddress(nn::nex::InetAddress*, unsigned int, unsigned int*);
    SetPeerAddress(nn::nex::InetAddress const*, unsigned int);
    IsSendMultiAddress(nn::nex::SocketDriver::InetAddress const*);
    GetSendMultiPort();
    CheckOrWaitForTransmission(nn::nex::SocketDriver::Socket*, bool, bool);
    StaticPoll(nn::nex::SocketDriver::PollInfo*, unsigned int, unsigned int);
    StaticShutdown(int);
    StaticGetPeerName(int, nn::nex::SocketDriver::InetAddress*);
    StaticSetAsync(int, bool);
    Create();
    Delete(nn::nex::SocketDriver::Socket*);
    Poll(nn::nex::SocketDriver::PollInfo*, unsigned int, unsigned int);
    ~BerkeleySocketDriver();
};

} } 
