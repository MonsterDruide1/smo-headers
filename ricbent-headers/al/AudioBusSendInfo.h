#pragma once

namespace al { 

class AudioBusSendInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::AudioBusSendInfo const*, al::AudioBusSendInfo const*);
    AudioBusSendInfo();
};

} 
