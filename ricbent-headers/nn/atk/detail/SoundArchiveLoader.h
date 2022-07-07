#pragma once

namespace nn { namespace atk { namespace detail { 

class SoundArchiveLoader
{
public:
    SoundArchiveLoader();
    ~SoundArchiveLoader();
    SetSoundArchive(nn::atk::SoundArchive const*);
    IsAvailable() const;
    LoadData(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned int, unsigned long);
    LoadSequenceSound(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned int, unsigned long);
    LoadAdvancedWaveSound(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned int, unsigned long);
    LoadWaveSound(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned int, unsigned long, unsigned int);
    LoadStreamSoundPrefetch(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned long);
    LoadBank(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned int, unsigned long);
    LoadWaveArchive(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned int, unsigned long);
    LoadGroup(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned long);
    LoadSoundGroup(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned int, unsigned long);
    LoadData(char const*, nn::atk::SoundMemoryAllocatable*, unsigned int, unsigned long);
    LoadImpl(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned long, bool);
    LoadFile(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned long, bool);
    LoadWaveArchiveImpl(unsigned int, unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned int, unsigned long);
    LoadIndividualWave(unsigned int, unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned long);
    LoadWaveArchiveTable(unsigned int, nn::atk::SoundMemoryAllocatable*, unsigned long);
    ReadFile(unsigned int, void*, unsigned long, int, unsigned long);
    PostProcessForLoadedGroupFile(void const*, nn::atk::SoundMemoryAllocatable*, unsigned long);
    SetWaveArchiveTableWithSeqInEmbeddedGroup(unsigned int, nn::atk::SoundMemoryAllocatable*);
    SetWaveArchiveTableWithBankInEmbeddedGroup(unsigned int, nn::atk::SoundMemoryAllocatable*);
    SetWaveArchiveTableWithWsdInEmbeddedGroup(unsigned int, nn::atk::SoundMemoryAllocatable*);
    SetWaveArchiveTableInEmbeddedGroupImpl(unsigned int, nn::atk::SoundMemoryAllocatable*);
    IsDataLoaded(char const*, unsigned int) const;
    IsDataLoaded(unsigned int, unsigned int) const;
    IsSequenceSoundDataLoaded(unsigned int, unsigned int) const;
    IsWaveSoundDataLoaded(unsigned int, unsigned int) const;
    IsBankDataLoaded(unsigned int, unsigned int) const;
    IsWaveArchiveDataLoaded(unsigned int, unsigned int) const;
    IsGroupDataLoaded(unsigned int) const;
    IsSoundGroupDataLoaded(unsigned int, unsigned int) const;
    GetFileAddressFromSoundArchive(unsigned int) const;
    detail_GetFileAddressByItemId(unsigned int) const;
    detail_LoadWaveArchiveByBankFile(void const*, nn::atk::SoundMemoryAllocatable*);
    detail_LoadWaveArchiveByWaveSoundFile(void const*, int, nn::atk::SoundMemoryAllocatable*);
    SignatureIndividualWave;
    WaveBufferAlignSize;
};

} } } 
