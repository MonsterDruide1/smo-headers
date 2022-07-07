#pragma once

namespace nn { namespace atk { namespace detail { 

class WaveSoundFileReader
{
public:
    WaveSoundFileReader(void const*);
    GetWaveSoundCount() const;
    GetNoteInfoCount(unsigned int) const;
    GetTrackInfoCount(unsigned int) const;
    ReadWaveSoundInfo(nn::atk::detail::WaveSoundInfo*, unsigned int) const;
    IsFilterSupportedVersion() const;
    ReadNoteInfo(nn::atk::detail::WaveSoundNoteInfo*, unsigned int, unsigned int) const;
    SignatureFile;
};

} } } 
