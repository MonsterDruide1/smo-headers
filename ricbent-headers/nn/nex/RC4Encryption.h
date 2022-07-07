#pragma once

namespace nn { namespace nex { 

class RC4Encryption
{
public:
    RC4Encryption();
    GetDefaultKey();
    ~RC4Encryption();
    KeyHasChanged();
    PrepareEncryption();
    ReinitStateArray();
    Encrypt(unsigned char*, unsigned long);
    EncryptDecrypt(unsigned char*, unsigned long);
    Decrypt(unsigned char*, unsigned long);
    Encrypt(nn::nex::Buffer*);
    Encrypt(nn::nex::Buffer const&, nn::nex::Buffer*);
    Decrypt(nn::nex::Buffer*);
    Decrypt(nn::nex::Buffer const&, nn::nex::Buffer*);
    SetReinitEverytime(bool);
};

} } 
