#pragma once

namespace al { 

class AudioResourceLoadGroupInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::AudioResourceLoadGroupInfo const*, al::AudioResourceLoadGroupInfo const*);
    AudioResourceLoadGroupInfo();
};

} 
