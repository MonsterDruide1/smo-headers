#pragma once

namespace nn { namespace atk { namespace detail { 

class BankFileReader
{
public:
    BankFileReader();
    BankFileReader(void const*);
    Initialize(void const*);
    Finalize();
    ReadVelocityRegionInfo(nn::atk::detail::VelocityRegionInfo*, int, int, int) const;
    GetWaveIdTable() const;
    SignatureFile;
};

} } } 
