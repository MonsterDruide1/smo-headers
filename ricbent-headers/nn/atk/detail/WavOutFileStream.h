#pragma once

namespace nn { namespace atk { namespace detail { 

class WavOutFileStream
{
public:
    WavOutFileStream();
    ~WavOutFileStream();
    Open(nn::atk::detail::fnd::FileStream&, int, unsigned long);
    WriteHeader(int, unsigned long);
    Close();
    FlushBuffer();
    CalcRiffChunkSize(unsigned long);
    UpdateRiffChunkSize();
    UpdateDataChunkSize();
    Write(void const*, unsigned long);
    WriteDirect(void const*, unsigned long, nn::atk::detail::fnd::FndResult*);
    Seek(long, nn::atk::detail::fnd::Stream::SeekOrigin);
    SetCacheBuffer(char*, unsigned long);
    FileIoBufferAlignment;
};

} } } 
