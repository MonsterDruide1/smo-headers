#pragma once

namespace nn { namespace atk { namespace detail { 

class LowLevelVoice
{
public:
    LowLevelVoice();
    Initialize();
    Finalize();
    FreeAllWaveBuffer();
    IsAvailable() const;
    SetAvailable(bool);
    IsVoiceDroppedFlagOn() const;
    AppendWaveBuffer(nn::atk::WaveBuffer*);
    UpdateState(nn::atk::OutputMode);
    UpdateStatePlay(bool, nn::atk::OutputMode);
    UpdateStateStop(bool);
    UpdateStatePause(bool, nn::atk::OutputMode);
    SetPriority(int);
    AllocVoice();
    SetState(nn::atk::detail::VoiceState);
    UpdateVoiceInfo(nn::atk::detail::VoiceInfo*) const;
    UpdateVoiceParam(nn::atk::detail::VoiceParam const&, nn::atk::OutputMode);
    UpdateVolume(nn::atk::detail::VoiceParam const&);
    UpdatePitch(nn::atk::detail::VoiceParam const&);
    UpdateBiquadFilter(nn::atk::detail::VoiceParam const&);
    UpdateLowPassFilter(nn::atk::detail::VoiceParam const&);
    UpdateMixVolume(nn::atk::OutputMix const&, nn::atk::OutputMode);
    UpdateWaveBuffer(bool, nn::atk::OutputMode);
    UpdatePlayPosition();
    UpdateWaveBufferOnPlayState();
    UpdateWaveBufferOnStopState(nn::atk::OutputMode);
    AppendWaveBufferToVoice(nn::atk::WaveBuffer*);
    UpdateMixVolumeOnSubMix(nn::atk::OutputMix const&, nn::atk::OutputMode);
    UpdateMixVolumeOnFinalMix(nn::atk::OutputMix const&, nn::atk::OutputMode);
    SetVoiceMixVolume(float, int);
    GetClampedVoiceVolume(float);
};

} } } 
