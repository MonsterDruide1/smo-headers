#pragma once

namespace nn { namespace atk { namespace TaskProfile { namespace LoadOpusStreamBlock {

GetTotalTime() const;
GetBeginTick() const;
GetEndTick() const;
GetRemainingCachePercentage() const;
GetCachedLength() const;
GetDecodeTime() const;
GetDecodedSampleCount() const;
GetFsAccessTime() const;
GetFsReadSize() const;
GetStreamSoundPlayer() const;
SetData(nn::os::Tick const&, nn::os::Tick const&, nn::atk::detail::IStreamDataDecoder::DecodeProfile const&, nn::atk::detail::IStreamDataDecoder::CacheProfile const&);

} } } } 
