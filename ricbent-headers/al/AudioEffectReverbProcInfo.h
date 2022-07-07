#pragma once

namespace al { 

class AudioEffectReverbProcInfo
{
public:
    createInfo(al::ByamlIter const&, char const*);
    AudioEffectReverbProcInfo();
    AudioEffectReverbProcInfo(al::AudioEffectReverbProcInfo const&);
    ~AudioEffectReverbProcInfo();
};

} 
