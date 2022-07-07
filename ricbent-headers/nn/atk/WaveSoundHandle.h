#pragma once

namespace nn { namespace atk { 

class WaveSoundHandle
{
public:
    WaveSoundHandle(nn::atk::SoundHandle*);
    detail_AttachSoundAsTempHandle(nn::atk::detail::WaveSound*);
    ForceStop();
    DetachSound();
};

} } 
