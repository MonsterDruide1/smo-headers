#pragma once

namespace nn { namespace atk { namespace detail { 

class SoundArchiveFileReader
{
public:
    SoundArchiveFileReader();
    Initialize(void const*);
    Finalize();
    IsStreamSendAvailable() const;
    IsFilterSupportedVersion() const;
    IsStreamPrefetchAvailable() const;
    SetStringBlock(void const*);
    SetInfoBlock(void const*);
    GetStringCount() const;
    GetString(unsigned int) const;
    DumpTree() const;
    GetItemId(char const*) const;
    GetItemLabel(unsigned int) const;
    GetItemFileId(unsigned int) const;
    GetItemPrefetchFileId(unsigned int) const;
    GetSoundCount() const;
    GetBankCount() const;
    GetPlayerCount() const;
    GetSoundGroupCount() const;
    GetGroupCount() const;
    GetWaveArchiveCount() const;
    GetFileCount() const;
    ReadSoundInfo(unsigned int, nn::atk::SoundArchive::SoundInfo*) const;
    ReadBankInfo(unsigned int, nn::atk::SoundArchive::BankInfo*) const;
    ReadPlayerInfo(unsigned int, nn::atk::SoundArchive::PlayerInfo*) const;
    ReadSoundGroupInfo(unsigned int, nn::atk::SoundArchive::SoundGroupInfo*) const;
    ReadGroupInfo(unsigned int, nn::atk::SoundArchive::GroupInfo*) const;
    ReadFileInfo(unsigned int, nn::atk::SoundArchive::FileInfo*, int) const;
    ReadWaveArchiveInfo(unsigned int, nn::atk::SoundArchive::WaveArchiveInfo*) const;
    ReadSoundArchivePlayerInfo(nn::atk::SoundArchive::SoundArchivePlayerInfo*) const;
    ReadSound3DInfo(unsigned int, nn::atk::SoundArchive::Sound3DInfo*) const;
    ReadSequenceSoundInfo(unsigned int, nn::atk::SoundArchive::SequenceSoundInfo*) const;
    ReadStreamSoundInfo(unsigned int, nn::atk::SoundArchive::StreamSoundInfo*) const;
    ReadStreamSoundInfo2(unsigned int, nn::atk::SoundArchive::StreamSoundInfo2*) const;
    ReadWaveSoundInfo(unsigned int, nn::atk::SoundArchive::WaveSoundInfo*) const;
    ReadAdvancedWaveSoundInfo(unsigned int, nn::atk::SoundArchive::AdvancedWaveSoundInfo*) const;
    GetWaveArchiveIdTable(unsigned int) const;
    GetSoundType(unsigned int) const;
    GetSoundUserParam(unsigned int) const;
    ReadSoundUserParam(unsigned int*, unsigned int, int) const;
    GetAttachedGroupTable(unsigned int) const;
    SignatureFile;
    InvalidOffset;
    InvalidSize;
};

} } } 
