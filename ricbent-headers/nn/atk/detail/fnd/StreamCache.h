#pragma once

namespace nn { namespace atk { namespace detail { namespace fnd { 

class StreamCache
{
public:
    StreamCache();
    StreamCache(nn::atk::detail::fnd::Stream*, void*, unsigned long);
    Initialize(nn::atk::detail::fnd::Stream*, void*, unsigned long);
    Finalize();
    Read(void*, unsigned long, nn::atk::detail::fnd::FndResult*, nn::atk::detail::fnd::FsAccessLog*, void*);
    FlushWriteCache();
    GetReadCacheHitLength(unsigned long) const;
    SyncStreamCurrentPosition(long);
    ClearCache();
    Write(void const*, unsigned long, nn::atk::detail::fnd::FndResult*);
    GetWritableCacheLength(unsigned long) const;
    Seek(long, nn::atk::detail::fnd::Stream::SeekOrigin);
    ~StreamCache();
    InvalidPosition;
};

} } } } 
