#pragma once

namespace nn { namespace atk { namespace detail { namespace fnd { 

class FileStreamProxy
{
public:
    FileStreamProxy(nn::atk::detail::fnd::FileStream*, long, unsigned long);
    ~FileStreamProxy();
    Open(char const*, nn::atk::detail::fnd::FileStream::AccessMode);
    Close();
    Flush();
    IsOpened() const;
    CanRead() const;
    CanWrite() const;
    CanSeek() const;
    GetSize() const;
    Read(void*, unsigned long, nn::atk::detail::fnd::FndResult*);
    Write(void const*, unsigned long, nn::atk::detail::fnd::FndResult*);
    Seek(long, nn::atk::detail::fnd::Stream::SeekOrigin);
    GetCurrentPosition() const;
    EnableCache(void*, unsigned long);
    DisableCache();
    IsCacheEnabled() const;
    GetIoBufferAlignment() const;
    CanSetFsAccessLog() const;
    SetFsAccessLog(nn::atk::detail::fnd::FsAccessLog*);
    GetCachePosition();
    GetCachedLength();
};

} } } } 
