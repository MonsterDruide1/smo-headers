#pragma once

namespace al { 

class AudioSystemPauseController
{
public:
    getAudioSystemPauseTypeName(al::AudioSystemPauseController::AudioSystemPauseType);
    getAudioSystemPauseType(char const*);
    AudioSystemPauseController();
    regist(al::IAudioSystemPause*);
    unregist(al::IAudioSystemPause*);
    pauseSystem(bool, char const*, bool, float);
};

} 
