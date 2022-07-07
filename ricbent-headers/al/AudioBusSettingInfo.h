#pragma once

namespace al { 

class AudioBusSettingInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::AudioBusSettingInfo const*, al::AudioBusSettingInfo const*);
    AudioBusSettingInfo();
};

} 
