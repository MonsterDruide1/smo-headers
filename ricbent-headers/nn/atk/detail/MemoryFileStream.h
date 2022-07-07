#pragma once

namespace nn { namespace atk { namespace detail { 

class MemoryFileStream
{
public:
    MemoryFileStream(void const*, unsigned long);
    Close();
    Read(void*, unsigned long, nn::atk::detail::fnd::FndResult*);
    Seek(long, nn::atk::detail::fnd::Stream::SeekOrigin);
    ~MemoryFileStream();
    IsOpened() const;
    Write(void const*, unsigned long, nn::atk::detail::fnd::FndResult*);
    GetCurrentPosition() const;
    GetSize() const;
    CanRead() const;
    CanWrite() const;
    CanSeek() const;
    Open(char const*, nn::atk::detail::fnd::FileStream::AccessMode);
    Flush();
    EnableCache(void*, unsigned long);
    DisableCache();
    IsCacheEnabled() const;
    GetIoBufferAlignment() const;
    CanSetFsAccessLog() const;
    SetFsAccessLog(nn::atk::detail::fnd::FsAccessLog*);
    GetCachePosition();
    GetCachedLength();
};

} } } 
