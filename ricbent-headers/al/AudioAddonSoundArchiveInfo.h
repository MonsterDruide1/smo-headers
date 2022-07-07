#pragma once

namespace al { 

class AudioAddonSoundArchiveInfo
{
public:
    AudioAddonSoundArchiveInfo();
    createInfo(al::ByamlIter const&);
    compareInfo(al::AudioAddonSoundArchiveInfo const*, al::AudioAddonSoundArchiveInfo const*);
};

} 
