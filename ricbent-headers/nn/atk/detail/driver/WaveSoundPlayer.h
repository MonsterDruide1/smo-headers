#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class WaveSoundPlayer
{
public:
    WaveSoundPlayer();
    ~WaveSoundPlayer();
    Initialize();
    Finalize();
    FinishPlayer();
    CloseChannel();
    FreeLoader();
    Prepare(nn::atk::detail::driver::WaveSoundPlayer::StartInfo const&, nn::atk::detail::driver::WaveSoundPlayer::PrepareArg const&);
    PrepareForPlayerHeap(nn::atk::detail::driver::WaveSoundPlayer::PrepareArg const&);
    RequestLoad(nn::atk::detail::driver::WaveSoundPlayer::StartInfo const&, nn::atk::detail::driver::WaveSoundLoader::Arg const&);
    Start();
    Stop();
    Pause(bool);
    SetPanRange(float);
    SetChannelPriority(int);
    SetReleasePriorityFix(bool);
    InvalidateData(void const*, void const*);
    GetPlaySamplePosition(bool) const;
    Update();
    TryAllocLoader();
    StartChannel();
    UpdateChannel();
    ChannelCallbackFunc(nn::atk::detail::driver::Channel*, nn::atk::detail::driver::Channel::ChannelCallbackStatus, void*);
    OnUpdateFrameSoundThread();
    OnUpdateFrameSoundThreadWithAudioFrameFrequency();
    OnShutdownSoundThread();
    PauseReleaseValue;
    MuteReleaseValue;
    DefaultPriority;
};

} } } } 
