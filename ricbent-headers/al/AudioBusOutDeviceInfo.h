#pragma once

namespace al { 

class AudioBusOutDeviceInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::AudioBusOutDeviceInfo const*, al::AudioBusOutDeviceInfo const*);
    AudioBusOutDeviceInfo();
};

} 
