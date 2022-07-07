#pragma once

namespace al { 

class AudioResourcePlayerKeeper
{
public:
    AudioResourcePlayerKeeper();
    ~AudioResourcePlayerKeeper();
    createAndAppendAudioResourcePlayer(char const*, char const*, al::AudioSoundArchiveInfo*, al::IAudioResourceInfoAccessor*);
    init(int, bool, bool);
    tryGetAudioResourcePlayer(char const*) const;
    tryGetSeadAudioPlayer(char const*) const;
    update();
};

} 
