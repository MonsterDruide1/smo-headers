#pragma once

namespace nn { namespace atk { 

class StreamSoundHandle
{
public:
    StreamSoundHandle(nn::atk::SoundHandle*);
    detail_AttachSoundAsTempHandle(nn::atk::detail::StreamSound*);
    DetachSound();
};

} } 
