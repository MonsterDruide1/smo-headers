#pragma once

namespace nn { namespace atk { namespace SoundSystem { 

class SoundSystemParam
{
public:
    SoundSystemParam();
    DefaultSoundThreadPriority;
    DefaultTaskThreadPriority;
    DefaultSoundThreadStackSize;
    DefaultTaskThreadStackSize;
    DefaultSoundThreadCommandBufferSize;
    DefaultTaskThreadCommandBufferSize;
    DefaultUserEffectCount;
    DefaultVoiceCountMax;
    DefaultSoundThreadCoreNumber;
    DefaultTaskThreadCoreNumber;
    DefaultRecordingAudioFrameCount;
};

} } } 
