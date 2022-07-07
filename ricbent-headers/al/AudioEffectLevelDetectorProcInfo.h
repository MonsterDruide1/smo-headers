#pragma once

namespace al { 

class AudioEffectLevelDetectorProcInfo
{
public:
    createInfo(al::ByamlIter const&, char const*);
    AudioEffectLevelDetectorProcInfo();
    ~AudioEffectLevelDetectorProcInfo();
};

} 
