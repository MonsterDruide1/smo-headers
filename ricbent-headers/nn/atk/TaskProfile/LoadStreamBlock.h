#pragma once

namespace nn { namespace atk { namespace TaskProfile { namespace LoadStreamBlock {

GetTotalTime() const;
GetBeginTick() const;
GetEndTick() const;
GetRemainingCachePercentage() const;
GetCachedLength() const;
GetStreamSoundPlayer() const;
SetData(nn::os::Tick const&, nn::os::Tick const&, nn::atk::detail::IStreamDataDecoder::CacheProfile const&);

} } } } 
