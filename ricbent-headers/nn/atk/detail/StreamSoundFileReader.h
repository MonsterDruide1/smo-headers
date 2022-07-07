#pragma once

namespace nn { namespace atk { namespace detail { 

class StreamSoundFileReader
{
public:
    StreamSoundFileReader();
    Initialize(void const*);
    IsValidFileHeader(void const*);
    Finalize();
    IsTrackInfoAvailable() const;
    IsOriginalLoopAvailable() const;
    IsOriginalLoopAvailableImpl(nn::atk::detail::StreamSoundFile::FileHeader const*);
    IsCrc32CheckAvailable() const;
    IsRegionIndexCheckAvailable() const;
    ReadStreamSoundInfo(nn::atk::detail::StreamSoundFile::StreamSoundInfo*) const;
    ReadStreamTrackInfo(nn::atk::detail::StreamSoundFileReader::TrackInfo*, int) const;
    ReadDspAdpcmChannelInfo(nn::atk::DspAdpcmParam*, nn::atk::detail::DspAdpcmLoopParam*, int) const;
};

} } } 
