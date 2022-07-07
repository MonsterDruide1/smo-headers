#pragma once

namespace al { 

class AudioBusSendController
{
public:
    AudioBusSendController(al::AudioInfoListWithParts<al::AudioBusSettingInfo> const*, al::AudioInfoListWithParts<al::SeResourceCategoryInfo> const*, al::AudioInfoListWithParts<al::BgmResourceCategoryInfo> const*, bool);
    update();
    tryGetBusSendRequest();
    getSubMixCountMax() const;
    getSubMixSeIndex() const;
    getSubMixBgmIndex() const;
};

} 
