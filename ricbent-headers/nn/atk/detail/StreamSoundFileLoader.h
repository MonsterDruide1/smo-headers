#pragma once

namespace nn { namespace atk { namespace detail { 

class StreamSoundFileLoader
{
public:
    LoadFileHeader(nn::atk::detail::StreamSoundFileReader*, void*, unsigned long);
    ReadSeekBlockData(unsigned short*, unsigned short*, int, int);
    ReadRegionInfo(nn::atk::detail::StreamSoundFile::RegionInfo*, unsigned int) const;
    ~StreamSoundFileLoader();
};

} } } 
