#pragma once

namespace nn { namespace nex { 

class FileStorageDevice
{
public:
    AddFileNamePrefix(nn::nex::String const&);
    FileStorageDevice();
    ~FileStorageDevice();
    Create(nn::nex::String const&);
    Open(nn::nex::String const&);
    Close(nn::nex::StorageUnit*);
    Delete(nn::nex::String const&);
};

} } 
