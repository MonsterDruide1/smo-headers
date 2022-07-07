#pragma once

namespace nn { namespace atk { namespace detail { 

class PlayerHeapDataManager
{
public:
    PlayerHeapDataManager();
    ~PlayerHeapDataManager();
    Finalize();
    Initialize(nn::atk::SoundArchive const*);
    SetFileAddress(unsigned int, void const*);
    GetFileAddress(unsigned int) const;
    InvalidateData(void const*, void const*);
    SetFileAddressToTable(unsigned int, void const*);
    GetFileAddressFromTable(unsigned int) const;
    GetFileAddressImpl(unsigned int) const;
    FileAddressCount;
};

} } } 
