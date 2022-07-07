#pragma once

namespace al { 

class AudioEachBusEffectInfo
{
public:
    createInfo(al::ByamlIter const&);
    duplicateInfo(al::AudioEachBusEffectInfo const&);
    compareInfo(al::AudioEachBusEffectInfo const*, al::AudioEachBusEffectInfo const*);
    AudioEachBusEffectInfo();
    AudioEachBusEffectInfo(al::AudioEachBusEffectInfo const&);
};

} 
