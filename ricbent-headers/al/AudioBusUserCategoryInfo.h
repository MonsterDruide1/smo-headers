#pragma once

namespace al { 

class AudioBusUserCategoryInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::AudioBusUserCategoryInfo const*, al::AudioBusUserCategoryInfo const*);
    AudioBusUserCategoryInfo();
};

} 
