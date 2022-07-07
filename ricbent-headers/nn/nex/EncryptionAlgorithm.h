#pragma once

namespace nn { namespace nex { 

class EncryptionAlgorithm
{
public:
    EncryptionAlgorithm(unsigned int, unsigned int);
    ~EncryptionAlgorithm();
    SetKey(nn::nex::Key const&);
    Encrypt(nn::nex::Buffer*);
    Decrypt(nn::nex::Buffer*);
    GetErrorString(unsigned int, char*, unsigned long);
    KeyHasChanged();
};

} } 
