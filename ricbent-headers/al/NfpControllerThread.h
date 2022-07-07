#pragma once

namespace al { 

class NfpControllerThread
{
public:
    NfpControllerThread(int);
    executeCommand(sead::Thread*, long);
    ~NfpControllerThread();
    setDeviceHandleAndNpadId(nn::nfp::DeviceHandle const&, unsigned int);
    enqueueCommand(al::NfpControllerCommand);
    start();
    stop();
    clearCommand();
    executeCommandAttachEvent();
    executeCommandStartDetection();
    executeCommandStopDetection();
    executeCommandTagDetect();
    executeCommandMount();
    executeCommandTagRead();
    executeCommandDeactive();
    executeCommandSleep();
    handleError(nn::Result const&);
    invalidate(nn::Result const&);
    isInvalid();
    setNfpInfo(al::NfpInfo*);
    resetNfpInfo(al::NfpInfo*);
    quitThread();
};

} 
