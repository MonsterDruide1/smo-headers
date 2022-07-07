#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class MultiVoice
{
public:
    MultiVoice();
    ~MultiVoice();
    Alloc(int, int, void (*)(nn::atk::detail::driver::MultiVoice*, nn::atk::detail::driver::MultiVoice::VoiceCallbackStatus, void*), void*);
    InitParam(void (*)(nn::atk::detail::driver::MultiVoice*, nn::atk::detail::driver::MultiVoice::VoiceCallbackStatus, void*), void*);
    Free();
    Start();
    Stop();
    StopAllSdkVoice();
    UpdateVoiceStatus();
    IsPlayFinished() const;
    Pause(bool);
    Calc();
    CalcSrc(bool);
    CalcVe();
    CalcMix();
    CalcLpf();
    CalcBiquadFilter();
    Update();
    RunAllSdkVoice();
    PauseAllSdkVoice();
    SetSampleFormat(nn::atk::SampleFormat);
    SetSampleRate(int);
    SetVolume(float);
    SetPitch(float);
    SetPanMode(nn::atk::PanMode);
    SetPanCurve(nn::atk::PanCurve);
    SetLpfFreq(float);
    SetBiquadFilter(int, float);
    SetPriority(int);
    SetOutputLine(unsigned int);
    SetOutputParamImpl(nn::atk::detail::OutputParam const&, nn::atk::detail::OutputParam&);
    SetTvParam(nn::atk::detail::OutputParam const&);
    SetSubMixIndex(int);
    CalcPreMixVolume(nn::atk::detail::driver::MultiVoice::PreMixVolume*, nn::atk::detail::OutputParam const&, int, nn::atk::OutputDevice);
    CalcTvMix(nn::atk::OutputMix*, nn::atk::detail::driver::MultiVoice::PreMixVolume const&);
    CalcMixImpl(nn::atk::OutputMix*, unsigned int, nn::atk::detail::OutputParam const&, nn::atk::detail::driver::MultiVoice::PreMixVolume const&);
    detail_GetSdkVoice(int) const;
    GetCurrentPlayingSample() const;
    GetFormat() const;
    IsRun() const;
    SetInterpolationType(unsigned char);
    AppendWaveBuffer(int, nn::atk::WaveBuffer*, bool);
    SetAdpcmParam(int, nn::audio::AdpcmParameter const&);
    FrameToByte(long, nn::atk::SampleFormat);
    CalcOffsetAdpcmParam(nn::atk::AdpcmContext*, nn::audio::AdpcmParameter const&, long, void const*);
    UpdateStart;
    UpdatePause;
    UpdateSrc;
    UpdateMix;
    UpdateLpf;
    UpdateBiquad;
    UpdateVe;
    PriorityNoDrop;
    VolumeMin;
    VolumeDefault;
    VolumeMax;
    PanLeft;
    PanCenter;
    PanRight;
    SpanFront;
    SpanCenter;
    SpanRear;
    CutoffFreqMin;
    CutoffFreqMax;
    BiquadValueMin;
    BiquadValueMax;
    SendMin;
    SendMax;
};

} } } } 
