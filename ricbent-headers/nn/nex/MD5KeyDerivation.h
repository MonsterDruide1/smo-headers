#pragma once

namespace nn { namespace nex { 

class MD5KeyDerivation
{
public:
    MD5KeyDerivation(unsigned int, unsigned int);
    ~MD5KeyDerivation();
    CreateKey(unsigned long, char const*);
    InitializeKey(char const*);
    FinalizeKey(unsigned long, nn::nex::Key const&);
    CreateKey(nn::nex::CallContext*, unsigned long, char const*, nn::nex::Key*);
    InitializeKey(nn::nex::CallContext*, char const*, nn::nex::Key*);
    FinalizeKey(nn::nex::CallContext*, unsigned long, nn::nex::Key const&, nn::nex::Key*);
    SetClientSideIterations(unsigned int);
    SetPrincipalIdModulo(unsigned int);
};

} } 
