#pragma once

namespace al { 

class TalkMessageVoicePlayer
{
public:
    TalkMessageVoicePlayer();
    start(al::IUseMessageSystem const*, al::IUseAudioKeeper const*, char16_t const*, int);
    stop();
    update();
    calcVoicePitch(int) const;
    isPlaying() const;
};

} 
