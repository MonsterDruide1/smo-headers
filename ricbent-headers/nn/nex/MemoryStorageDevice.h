#pragma once

namespace nn { namespace nex { 

class MemoryStorageDevice
{
public:
    MemoryStorageDevice();
    ~MemoryStorageDevice();
    Create(nn::nex::String const&);
    Open(nn::nex::String const&);
    Close(nn::nex::StorageUnit*);
    Delete(nn::nex::String const&);
};

} } 
