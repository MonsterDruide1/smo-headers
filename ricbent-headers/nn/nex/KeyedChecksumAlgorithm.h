#pragma once

namespace nn { namespace nex { 

class KeyedChecksumAlgorithm
{
public:
    KeyedChecksumAlgorithm(unsigned long, unsigned long);
    ~KeyedChecksumAlgorithm();
    SetKey(nn::nex::Key const&);
    IsReady() const;
    SetKey(unsigned char const*, unsigned long);
    KeyHasChanged();
};

} } 
