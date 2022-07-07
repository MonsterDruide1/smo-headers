#pragma once

namespace al { 

class AudioBusSend
{
public:
    AudioBusSend();
    set(float, float);
    AudioBusSend(float, float);
    AudioBusSend(al::AudioBusOutDeviceInfo const*);
    reset();
    getAuxBusSend(nn::atk::AuxBus) const;
    setMainBusSend(float);
    set(al::AudioBusSend const&);
    setAuxBusSend(nn::atk::AuxBus, float);
    setWithoutThrowValue(al::AudioBusSend const&);
    applyBusSend(al::AcLSoundHandle*) const;
    mulMainBusSend(float);
    mulAuxBusSend(nn::atk::AuxBus, float);
    mul(al::AudioBusSend&, al::AudioBusSend const&) const;
};

} 
