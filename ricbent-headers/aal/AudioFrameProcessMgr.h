#pragma once

namespace aal { 

class AudioFrameProcessMgr
{
public:
    AudioFrameProcessMgr();
    ~AudioFrameProcessMgr();
    clearProcess();
    addProcess(aal::IAudioFrameProcess*);
    registerAudioFrameCallback_();
    removeProcess(aal::IAudioFrameProcess*);
    unregisterAudioFrameCallback_();
    audioFrameProcess_();
    audioFrameCallback_(unsigned long);
    sInstance;
};

} 
