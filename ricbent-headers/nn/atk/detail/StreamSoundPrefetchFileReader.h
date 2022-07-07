#pragma once

namespace nn { namespace atk { namespace detail { 

class StreamSoundPrefetchFileReader
{
public:
    StreamSoundPrefetchFileReader();
    ~StreamSoundPrefetchFileReader();
    Finalize();
    Initialize(void const*);
    IsValidFileHeader(void const*) const;
    GetRegionDataOffset() const;
    GetRegionInfoBytes() const;
    IsIncludeRegionInfo() const;
    IsCrc32CheckAvailable() const;
    IsRegionIndexCheckAvailable() const;
    ReadStreamSoundInfo(nn::atk::detail::StreamSoundFile::StreamSoundInfo*) const;
    ReadDspAdpcmChannelInfo(nn::atk::DspAdpcmParam*, nn::atk::detail::DspAdpcmLoopParam*, int) const;
    ReadPrefetchDataInfo(nn::atk::detail::StreamSoundPrefetchFileReader::PrefetchDataInfo*, int) const;
    ReadRegionInfo(nn::atk::detail::StreamSoundFile::RegionInfo*, unsigned int) const;
};

} } } 
