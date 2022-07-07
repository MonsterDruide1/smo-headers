#pragma once

namespace al { 

class AudioEffectInfo
{
public:
    createInfo(al::ByamlIter const&);
    duplicateInfo(al::AudioEffectInfo const&);
    compareInfo(al::AudioEffectInfo const*, al::AudioEffectInfo const*);
    AudioEffectInfo();
    AudioEffectInfo(al::AudioEffectInfo const&);
};

} 
