#pragma once

namespace nn { namespace atk { namespace detail { 

class WaveFileReader
{
public:
    GetSampleFormat(unsigned char);
    WaveFileReader(void const*, signed char);
    IsOriginalLoopAvailable() const;
    ReadWaveInfo(nn::atk::detail::WaveInfo*, void const*) const;
    GetWaveDataAddress(nn::atk::detail::WaveFile::ChannelInfo const*, void const*) const;
    SignatureFile;
};

} } } 
