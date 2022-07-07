#pragma once

namespace nn { namespace atk { 

class SoundArchive
{
public:
    FileAccessBegin() const;
    FileAccessEnd() const;
    IsAddon() const;
    SoundArchive();
    ~SoundArchive();
    IsAvailable() const;
    Initialize(nn::atk::detail::SoundArchiveFileReader*);
    Finalize();
    GetSoundCount() const;
    GetPlayerCount() const;
    GetSoundGroupCount() const;
    GetGroupCount() const;
    GetBankCount() const;
    GetWaveArchiveCount() const;
    detail_GetFileCount() const;
    GetItemLabel(unsigned int) const;
    GetItemId(char const*) const;
    GetItemFileId(unsigned int) const;
    GetItemPrefetchFileId(unsigned int) const;
    GetSoundUserParam(unsigned int) const;
    ReadSoundUserParam(unsigned int*, unsigned int, int) const;
    GetSoundType(unsigned int) const;
    ReadSoundInfo(nn::atk::SoundArchive::SoundInfo*, unsigned int) const;
    ReadSequenceSoundInfo(nn::atk::SoundArchive::SequenceSoundInfo*, unsigned int) const;
    ReadStreamSoundInfo(nn::atk::SoundArchive::StreamSoundInfo*, unsigned int) const;
    detail_ReadStreamSoundInfo2(unsigned int, nn::atk::SoundArchive::StreamSoundInfo2*) const;
    detail_ReadWaveSoundInfo(unsigned int, nn::atk::SoundArchive::WaveSoundInfo*) const;
    detail_ReadAdvancedWaveSoundInfo(unsigned int, nn::atk::SoundArchive::AdvancedWaveSoundInfo*) const;
    ReadPlayerInfo(nn::atk::SoundArchive::PlayerInfo*, unsigned int) const;
    ReadSoundArchivePlayerInfo(nn::atk::SoundArchive::SoundArchivePlayerInfo*) const;
    ReadSound3DInfo(nn::atk::SoundArchive::Sound3DInfo*, unsigned int) const;
    ReadBankInfo(nn::atk::SoundArchive::BankInfo*, unsigned int) const;
    ReadWaveArchiveInfo(unsigned int, nn::atk::SoundArchive::WaveArchiveInfo*) const;
    detail_ReadSoundGroupInfo(unsigned int, nn::atk::SoundArchive::SoundGroupInfo*) const;
    ReadGroupInfo(nn::atk::SoundArchive::GroupInfo*, unsigned int) const;
    detail_ReadFileInfo(unsigned int, nn::atk::SoundArchive::FileInfo*) const;
    detail_GetWaveArchiveIdTable(unsigned int) const;
    detail_OpenFileStream(unsigned int, void*, unsigned long, void*, unsigned long) const;
    OpenExtStreamImpl(void*, unsigned long, char const*, void*, unsigned long) const;
    detail_GetExternalFileFullPath(char const*, char*, unsigned long) const;
    SetExternalFileRoot(char const*);
    ReadStreamSoundFilePath(char*, unsigned long, unsigned int) const;
    detail_GetAttachedGroupTable(unsigned int) const;
    InvalidId;
    UserParamIndexMax;
    ResultInvalidSoundId;
    InvalidUserParam;
    SequenceBankMax;
    StreamTrackCount;
    FilePathMax;
};

} } 
