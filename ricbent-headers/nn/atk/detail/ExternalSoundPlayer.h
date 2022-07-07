#pragma once

namespace nn { namespace atk { namespace detail { 

class ExternalSoundPlayer
{
public:
    ExternalSoundPlayer();
    ~ExternalSoundPlayer();
    StopAllSound(int);
    PauseAllSound(bool, int);
    PauseAllSound(bool, int, nn::atk::PauseMode);
    Finalize(nn::atk::SoundActor*);
    RemoveSound(nn::atk::detail::BasicSound*);
    AppendSound(nn::atk::detail::BasicSound*);
    GetLowestPrioritySound();
    SetPlayableSoundCount(int);
    CanPlaySound(int);
};

} } } 
