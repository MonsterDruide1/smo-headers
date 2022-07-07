#pragma once

namespace nn { namespace atk { namespace detail { 

class SequenceSound
{
public:
    SequenceSound(nn::atk::detail::SoundInstanceManager<nn::atk::detail::SequenceSound>&);
    Initialize();
    Finalize();
    Setup(nn::atk::detail::driver::SequenceTrackAllocator*, unsigned int, nn::atk::detail::driver::NoteOnCallback*, int, bool, void (*)(unsigned short, nn::atk::SequenceUserProcCallbackParam*, void*), void*);
    Prepare(nn::atk::detail::SequenceSound::Resource const&, nn::atk::detail::driver::SequenceSoundPlayer::StartInfo const&);
    Skip(nn::atk::detail::driver::SequenceSoundPlayer::StartOffsetType, int);
    SetTempoRatio(float);
    SetChannelPriority(int);
    OnUpdatePlayerPriority();
    SetTrackMute(unsigned int, nn::atk::SequenceMute);
    SetTrackMute(unsigned int, bool);
    SetTrackSilence(unsigned int, bool, int);
    SetTrackVolume(unsigned int, float);
    SetTrackPitch(unsigned int, float);
    SetTrackMainOutVolume(unsigned int, float);
    SetTrackChannelMixParameter(unsigned int, unsigned int, nn::atk::MixParameter const&);
    SetTrackPan(unsigned int, float);
    SetTrackSurroundPan(unsigned int, float);
    SetTrackMainSend(unsigned int, float);
    SetTrackFxSend(unsigned int, nn::atk::AuxBus, float);
    SetTrackLpfFreq(unsigned int, float);
    SetTrackBiquadFilter(unsigned int, int, float);
    SetTrackBankIndex(unsigned int, int);
    SetTrackTranspose(unsigned int, signed char);
    SetTrackVelocityRange(unsigned int, unsigned char);
    SetTrackOutputLine(unsigned int, unsigned int);
    ResetTrackOutputLine(unsigned int);
    ReadVariable(int, short*) const;
    ReadGlobalVariable(int, short*);
    ReadTrackVariable(int, int, short*) const;
    WriteVariable(int, short);
    WriteGlobalVariable(int, short);
    WriteTrackVariable(int, int, short);
    GetTick() const;
    IsAttachedTempSpecialHandle();
    DetachTempSpecialHandle();
    RegisterDataLoadTask(nn::atk::detail::driver::SequenceSoundLoader::LoadInfo const&, nn::atk::detail::driver::SequenceSoundPlayer::StartInfo const&);
    GetRuntimeTypeInfo() const;
    ~SequenceSound();
    IsPrepared() const;
    GetBasicSoundPlayerHandle();
    OnUpdateParam();
    BankIndexMin;
    BankIndexMax;
    TransposeMin;
    TransposeMax;
    VelocityRangeMin;
    VelocityRangeMax;
};

} } } 
