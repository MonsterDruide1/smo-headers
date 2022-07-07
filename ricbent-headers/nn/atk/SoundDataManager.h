#pragma once

namespace nn { namespace atk { 

class SoundDataManager
{
public:
    SoundDataManager();
    ~SoundDataManager();
    GetRequiredMemSize(nn::atk::SoundArchive const*) const;
    Initialize(nn::atk::SoundArchive const*, void*, unsigned long);
    CreateTables(void**, nn::atk::SoundArchive const*, void*);
    Finalize();
    InvalidateData(void const*, void const*);
    detail_GetFileAddress(unsigned int) const;
    GetFileAddressImpl(unsigned int) const;
    SetFileAddressToTable(unsigned int, void const*);
    GetFileAddressFromTable(unsigned int) const;
    SetFileAddress(unsigned int, void const*);
    detail_GetFileIdFromTable(void const*) const;
    SetFileAddressInGroupFile(void const*, unsigned long);
    ClearFileAddressInGroupFile(void const*, unsigned long);
    InvalidateSoundData(void const*, unsigned long);
    BufferAlignSize;
};

} } 
