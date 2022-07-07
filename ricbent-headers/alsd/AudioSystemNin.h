#pragma once

namespace alsd { 

class AudioSystemNin
{
public:
    AudioSystemNin();
    initialize();
    initializeMain_();
    finalize();
    finalizeMain_();
    setCommandBufferSize(int, int);
    initializeSdk_();
    finalizeSdk_();
    initializeNw_();
    appendSoundFrameCallback(alsd::ISoundFrameCallback&);
    soundFrameCallback_(unsigned long);
    removeSoundFrameCallback(alsd::ISoundFrameCallback&);
    clearSoundFrameCallback();
    soundFrameProc_();
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    ~AudioSystemNin();
    setOutputMode(alsd::AudioGlobal::OutputMode);
    getOutputMode() const;
    appendEffect(alsd::AudioGlobal::AuxBus, alsd::AudioFx*);
    appendFxObject(alsd::AudioGlobal::AuxBus, alsd::AudioFxObject*);
    clearEffect(alsd::AudioGlobal::AuxBus, int);
    isFinishedClearEffect(alsd::AudioGlobal::AuxBus);
};

} 
