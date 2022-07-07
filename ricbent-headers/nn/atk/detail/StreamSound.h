#pragma once

namespace nn { namespace atk { namespace detail { 

class StreamSound
{
public:
    StreamSound(nn::atk::detail::SoundInstanceManager<nn::atk::detail::StreamSound>&);
    Initialize();
    Finalize();
    Setup(nn::atk::detail::driver::StreamSoundPlayer::SetupArg const&);
    Prepare(nn::atk::detail::driver::StreamSoundPlayer::PrepareBaseArg const&);
    PreparePrefetch(void const*, nn::atk::detail::driver::StreamSoundPlayer::PrepareBaseArg const&);
    UpdateMoveValue();
    OnUpdateParam();
    SetTrackVolume(unsigned int, float, int);
    SetTrackInitialVolume(unsigned int, unsigned int);
    SetTrackOutputLine(unsigned int, unsigned int);
    ResetTrackOutputLine(unsigned int);
    SetTrackMainOutVolume(unsigned int, float);
    SetTrackChannelMixParameter(unsigned int, unsigned int, nn::atk::MixParameter const&);
    SetTrackPan(unsigned int, float);
    SetTrackSurroundPan(unsigned int, float);
    SetTrackMainSend(unsigned int, float);
    SetTrackFxSend(unsigned int, nn::atk::AuxBus, float);
    OnUpdatePlayerPriority();
    IsAttachedTempSpecialHandle();
    DetachTempSpecialHandle();
    ReadStreamSoundDataInfo(nn::atk::StreamSoundDataInfo*) const;
    GetPlayLoopCount() const;
    GetPlaySamplePosition(bool) const;
    GetFilledBufferPercentage() const;
    GetBufferBlockCount(nn::atk::WaveBuffer::Status) const;
    GetTotalBufferBlockCount() const;
    IsPrepared() const;
    IsSuspendByLoadingDelay() const;
    IsLoadingDelayState() const;
    GetRuntimeTypeInfo() const;
    ~StreamSound();
    GetBasicSoundPlayerHandle();
};

} } } 
