#pragma once

namespace nn { namespace atk { namespace detail { 

class DspadpcmReader
{
public:
    DspadpcmReader();
    ReadWaveInfo(nn::atk::detail::WaveInfo*) const;
};

} } } 
