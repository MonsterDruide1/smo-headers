#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class SequenceSoundPlayer
{
public:
    InitSequenceSoundPlayer();
    SequenceSoundPlayer();
    ~SequenceSoundPlayer();
    Initialize();
    Finalize();
    FinishPlayer();
    FreeLoader();
    Setup(nn::atk::detail::driver::SequenceSoundPlayer::SetupArg const&);
    SetPlayerTrack(int, nn::atk::detail::driver::SequenceTrack*);
    Start();
    Stop();
    Pause(bool);
    GetPlayerTrack(int);
    Skip(nn::atk::detail::driver::SequenceSoundPlayer::StartOffsetType, int);
    SetTempoRatio(float);
    SetPanRange(float);
    SetChannelPriority(int);
    SetReleasePriorityFix(bool);
    SetSequenceUserprocCallback(void (*)(unsigned short, nn::atk::SequenceUserProcCallbackParam*, void*), void*);
    CallSequenceUserprocCallback(unsigned short, nn::atk::detail::driver::SequenceTrack*);
    GetVariablePtr(int);
    GetLocalVariable(int) const;
    GetGlobalVariable(int);
    SetLocalVariable(int, short);
    SetGlobalVariable(int, short);
    SetTrackMute(unsigned int, nn::atk::SequenceMute);
    SetTrackSilence(unsigned long, bool, int);
    SetTrackVolume(unsigned int, float);
    SetTrackPitch(unsigned int, float);
    SetTrackLpfFreq(unsigned int, float);
    SetTrackBiquadFilter(unsigned int, int, float);
    SetTrackBankIndex(unsigned int, int);
    SetTrackTranspose(unsigned int, signed char);
    SetTrackVelocityRange(unsigned int, unsigned char);
    SetTrackOutputLine(unsigned int, unsigned int);
    ResetTrackOutputLine(unsigned int);
    SetTrackTvVolume(unsigned int, float);
    SetTrackChannelTvMixParameter(unsigned int, unsigned int, nn::atk::MixParameter const&);
    SetTrackTvPan(unsigned int, float);
    SetTrackTvSurroundPan(unsigned int, float);
    SetTrackTvMainSend(unsigned int, float);
    SetTrackTvFxSend(unsigned int, nn::atk::AuxBus, float);
    InvalidateData(void const*, void const*);
    GetPlayerTrack(int) const;
    CloseTrack(int);
    UpdateChannelParam();
    ParseNextTick(bool);
    Update();
    TryAllocLoader();
    PrepareForPlayerHeap(nn::atk::detail::driver::SequenceSoundPlayer::PrepareArg const&);
    SkipTick();
    UpdateTick();
    NoteOn(unsigned char, nn::atk::detail::driver::NoteOnInfo const&);
    Prepare(nn::atk::detail::driver::SequenceSoundPlayer::PrepareArg const&);
    RequestLoad(nn::atk::detail::driver::SequenceSoundPlayer::StartInfo const&, nn::atk::detail::driver::SequenceSoundLoader::Arg const&);
    GetProcessTick(nn::atk::SoundProfile const&);
    PrepareForMidi(void const**, void const**, bool*);
    SetSkipIntervalTick(int);
    GetSkipIntervalTick();
    ChannelCallback(nn::atk::detail::driver::Channel*);
    OnUpdateFrameSoundThread();
    OnUpdateFrameSoundThreadWithAudioFrameFrequency();
    OnShutdownSoundThread();
    PlayerVariableCount;
    GlobalVariableCount;
    TrackCountPerPlayer;
    AllTrackBitFlag;
    VariableDefaultValue;
    DefaultTimebase;
    DefaultTempo;
    DefaultSkipIntervalTick;
    m_SkipIntervalTickPerFrame;
    m_GlobalVariable;
};

} } } } 
