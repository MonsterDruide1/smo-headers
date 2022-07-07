#pragma once

namespace al { 

class AudioEffectDelayProcInfo
{
public:
    createInfo(al::ByamlIter const&, char const*);
    AudioEffectDelayProcInfo();
    AudioEffectDelayProcInfo(al::AudioEffectDelayProcInfo const&);
    ~AudioEffectDelayProcInfo();
};

} 
