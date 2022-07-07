#pragma once

namespace al { 

class AudioCategoryBusSendSetting
{
public:
    AudioCategoryBusSendSetting(char const*, int);
    setBusSend(al::AudioBusSend const&);
    resetAllBusSend();
};

} 
