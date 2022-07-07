#pragma once

namespace nn { namespace nex { 

class JobPerformNATCheck
{
public:
    JobPerformNATCheck(nn::nex::CallContext*, nn::nex::InetAddress const&);
    StepPreTest();
    ~JobPerformNATCheck();
    DetectFullNATProperties();
    DetectSimplifiedNATProperties();
    DetectCurrentPortMapping(nn::nex::NATRelayInterface*, nn::nex::StationURL const&, nn::nex::StationURL const&, bool);
    BindRandomPort();
    StepStart();
    StepTest1();
    StepEnd();
    StepSend();
    StepTest2();
    StepTest3();
    StepTest4();
    StepTest5();
    StepRecv();
    MessageReceived(nn::nex::NATCheckMessage const&);
    TimeoutReceived();
    HandleFullResults();
    StepRun();
    SendNextQueuedMessage();
    StepSendProbeRequest();
    HandleSimplifiedResults();
    s_uiCurrentPort;
};

} } 
