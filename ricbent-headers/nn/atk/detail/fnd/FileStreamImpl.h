#pragma once

namespace nn { namespace atk { namespace detail { namespace fnd { 

class FileStreamImpl
{
public:
    Read(void*, unsigned long, nn::atk::detail::fnd::FndResult*);
    Write(void const*, unsigned long, nn::atk::detail::fnd::FndResult*);
    Seek(long, nn::atk::detail::fnd::Stream::SeekOrigin);
    CanRead() const;
    CanWrite() const;
    CanSeek() const;
    EnableCache(void*, unsigned long);
    DisableCache();
    ValidateAlignment(void const*) const;
    FileStreamImpl();
    Open(char const*, nn::atk::detail::fnd::FileStream::AccessMode);
    Close();
    Flush();
    IsOpened() const;
    GetSize() const;
    GetIoBufferAlignment() const;
    ReadDirect(void*, unsigned long, nn::atk::detail::fnd::FndResult*);
    WriteDirect(void const*, unsigned long, nn::atk::detail::fnd::FndResult*);
    SeekDirect(long, nn::atk::detail::fnd::Stream::SeekOrigin);
    ~FileStreamImpl();
    GetCurrentPosition() const;
    IsCacheEnabled() const;
    CanSetFsAccessLog() const;
    SetFsAccessLog(nn::atk::detail::fnd::FsAccessLog*);
    GetCachePosition();
    GetCachedLength();
};

} } } } 
