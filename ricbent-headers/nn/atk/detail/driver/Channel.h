#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class Channel
{
public:
    Channel();
    ~Channel();
    InitParam(void (*)(nn::atk::detail::driver::Channel*, nn::atk::detail::driver::Channel::ChannelCallbackStatus, void*), void*);
    Update(bool);
    Stop();
    GetSweepValue() const;
    UpdateSweep(int);
    Start(nn::atk::detail::WaveInfo const&, int, long);
    AppendWaveBuffer(nn::atk::detail::WaveInfo const&, long);
    Release();
    NoteOff();
    SetSweepParam(float, int, bool);
    SetBiquadFilter(int, float);
    GetCurrentPlayingSample(bool) const;
    VoiceCallbackFunc(nn::atk::detail::driver::MultiVoice*, nn::atk::detail::driver::MultiVoice::VoiceCallbackStatus, void*);
    CallChannelCallback(nn::atk::detail::driver::Channel::ChannelCallbackStatus);
    AllocChannel(int, int, void (*)(nn::atk::detail::driver::Channel*, nn::atk::detail::driver::Channel::ChannelCallbackStatus, void*), void*);
    FreeChannel(nn::atk::detail::driver::Channel*);
    DetachChannel(nn::atk::detail::driver::Channel*);
    ChannelCount;
    ChannelMin;
    ChannelMax;
    PriorityRelease;
    KeyInit;
    OriginalKeyInit;
    SilenceVolumeMax;
    SilenceVolumeMin;
    WaveBufferMax;
    ModCount;
    SilenceVolumeMaxR;
};

} } } } 
