#pragma once

namespace nn { namespace nex { 

class KerberosEncryption
{
public:
    KerberosEncryption();
    ~KerberosEncryption();
    SetKey(nn::nex::Key const&);
    Encrypt(nn::nex::Buffer const&, nn::nex::Buffer*);
    Decrypt(nn::nex::Buffer const&, nn::nex::Buffer*);
    Encrypt(nn::nex::Buffer const&, nn::nex::Buffer*, nn::nex::Key const&);
    Decrypt(nn::nex::Buffer const&, nn::nex::Buffer*, nn::nex::Key const&);
    CreateKey(nn::nex::CallContext*, unsigned long, char const*, nn::nex::Key*);
    CreateKey(unsigned long, char const*);
    InitializeKey(nn::nex::CallContext*, char const*, nn::nex::Key*);
    InitializeKey(char const*);
    FinalizeKey(nn::nex::CallContext*, unsigned long, nn::nex::Key const&, nn::nex::Key*);
    FinalizeKey(unsigned long, nn::nex::Key const&);
    SetKeyDerivation(nn::nex::KeyDerivation*);
    EnablePasswordCache();
    DisablePasswordCache();
    GenerateConcatenateKey(nn::nex::Key const&) const;
    GenerateConcatenateKey(nn::nex::Key const&, nn::nex::Key const&);
    s_pKeyDerivation;
    s_pKeyCache;
};

} } 
