#pragma once

namespace al { 

class NfpDirector
{
public:
    NfpDirector(int);
    executeCommand(sead::Thread*, long);
    ~NfpDirector();
    initialize();
    enqueueCommand(al::NfpApplicationCommand);
    finalize();
    update();
    stop();
    listDevices();
    start();
    clearCommand();
    resetError();
    showError(nn::Result const&);
    executeCommandInitialize();
    executeCommandFinalize();
    executeCommandListDevices();
    executeCommandStart();
    executeCommandStop();
};

} 
