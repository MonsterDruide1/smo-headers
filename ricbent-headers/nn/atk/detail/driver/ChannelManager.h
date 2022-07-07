#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class ChannelManager
{
public:
    GetInstance();
    ChannelManager();
    GetRequiredMemSize(int);
    Initialize(void*, unsigned long);
    Finalize();
    Free(nn::atk::detail::driver::Channel*);
    Alloc();
    UpdateAllChannel();
    UpdateAudioFrameChannel();
};

} } } } 
