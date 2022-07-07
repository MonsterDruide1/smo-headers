#pragma once

namespace al { namespace AudioBusSendFader { 

class AudioBusGroupFader
{
public:
    AudioBusGroupFader(al::AudioSubMixInfoAccessor const*);
    AudioBusGroupFader(al::AudioBusSettingInfo const*, al::AudioInfoListWithParts<al::AudioBusSendInfo> const*, al::AudioSubMixInfoAccessor const*);
};

} } 
