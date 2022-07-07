#pragma once

namespace al { 

class AudioBusSendFader
{
public:
    AudioBusSendFader(int, al::AudioSubMixInfoAccessor const*);
    activateBusGroupFader(al::AudioBusSettingInfo const*, al::AudioInfoListWithParts<al::AudioBusSendInfo> const*);
    update();
    reset();
    startFadeIn(char const*, int);
    startFadeOut(char const*, int);
    startFadeInAll(int);
    startFadeOutAll(int);
    isFinishedFadeIn(char const*);
    isFinishedFadeOut(char const*);
    isFinishedFadeInAll();
    isFinishedFadeOutAll();
};

} 
