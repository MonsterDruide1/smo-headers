#pragma once

namespace nn { namespace atk { namespace detail { 

class LowLevelVoiceAllocator
{
public:
    LowLevelVoiceAllocator();
    GetRequiredMemSize(int);
    Initialize(int, void*, unsigned long);
    Finalize();
    UpdateAllVoiceState(nn::atk::OutputMode);
    AllocVoice();
    GetVoiceArrayIndex(nn::atk::detail::LowLevelVoice*);
    FreeVoice(nn::atk::detail::LowLevelVoice*);
    GetDroppedVoiceCount() const;
    Unassigned;
};

} } } 
