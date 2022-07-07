#pragma once

namespace al { 

class AudioBusSendSelector
{
public:
    AudioBusSendSelector();
    select(al::AudioBusSend&) const;
    selectMainBusSend();
    selectAuxBusSend(nn::atk::AuxBus);
};

} 
