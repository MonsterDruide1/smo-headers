#pragma once

namespace al { 

class AudioEffectCtrlPerBus
{
public:
    AudioEffectCtrlPerBus(int, nn::atk::OutputDevice, nn::atk::AuxBus);
    init();
    finalize();
    appendEffects(al::AudioEachBusEffectInfo const*);
    activate();
    releaseAllWorkBuffer();
    deactivate();
    isThisBus(char const*);
    disableAudioEffectUnit();
    isDisableAudioEffectUnit() const;
    clearEffectFromBus();
    isFinishedClearEffect() const;
};

} 
