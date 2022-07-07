#pragma once

namespace nn { namespace atk { namespace detail { namespace fnd { namespace FileStreamImpl { 

class DirectStream
{
public:
    ~DirectStream();
    Close();
    IsOpened() const;
    Read(void*, unsigned long, nn::atk::detail::fnd::FndResult*);
    Write(void const*, unsigned long, nn::atk::detail::fnd::FndResult*);
    Seek(long, nn::atk::detail::fnd::Stream::SeekOrigin);
    GetCurrentPosition() const;
    GetSize() const;
    CanRead() const;
    CanWrite() const;
    CanSeek() const;
};

} } } } } 
