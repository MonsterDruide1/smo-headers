#pragma once

namespace nn { namespace atk { namespace detail { 

class StreamSoundRuntime
{
public:
    StreamSoundRuntime();
    ~StreamSoundRuntime();
    Initialize(int, void**, void const*, void*, unsigned long);
    GetRequiredStreamInstanceSize(int);
    SetupStreamBuffer(nn::atk::SoundArchive const*, void*, unsigned long);
    SetupStreamBuffer(nn::atk::SoundArchive const*, void*, unsigned long, nn::atk::detail::driver::StreamBufferPool*);
    GetRequiredStreamBufferSize(nn::atk::SoundArchive const*) const;
    GetRequiredStreamBufferTimes(nn::atk::SoundArchive const*);
    SetupStreamCacheBuffer(nn::atk::SoundArchive const*, void*, unsigned long);
    Finalize();
    GetRequiredMemorySize(nn::atk::SoundArchive::SoundArchivePlayerInfo const&, int);
    GetRequiredStreamCacheSize(nn::atk::SoundArchive const*, unsigned long);
    GetActiveCount() const;
    GetActiveChannelCount() const;
    GetActiveTrackCount() const;
    GetFreeCount() const;
    SetupUserParam(void**, unsigned long);
    Update();
    AllocSound(unsigned int, int, int, nn::atk::detail::BasicSound::AmbientInfo*);
    PrepareImpl(nn::atk::SoundArchive const*, nn::atk::SoundDataManager const*, unsigned int, nn::atk::detail::StreamSound*, nn::atk::SoundArchive::SoundInfo const*, nn::atk::detail::StartInfoReader const&);
    DumpMemory(nn::atk::SoundArchive const*) const;
    DefaultStreamBlockCount;
};

} } } 
