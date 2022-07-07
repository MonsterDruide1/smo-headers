#pragma once

namespace al { 

class AudioResourceLoadInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::AudioResourceLoadInfo const*, al::AudioResourceLoadInfo const*);
    AudioResourceLoadInfo();
};

} 
