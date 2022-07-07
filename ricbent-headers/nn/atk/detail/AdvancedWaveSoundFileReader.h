#pragma once

namespace nn { namespace atk { namespace detail { 

class AdvancedWaveSoundFileReader
{
public:
    AdvancedWaveSoundFileReader(void const*);
    GetWaveSoundTrackCount() const;
    GetWaveSoundClipCount(int) const;
    ReadWaveSoundTrackInfoSet(nn::atk::detail::AdvancedWaveSoundTrackInfoSet*);
};

} } } 
