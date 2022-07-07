#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class MultiVoiceManager
{
public:
    GetInstance();
    MultiVoiceManager();
    GetRequiredMemSize(int);
    Initialize(void*, unsigned long);
    Finalize();
    StopAllVoices();
    AllocVoice(int, int, void (*)(nn::atk::detail::driver::MultiVoice*, nn::atk::detail::driver::MultiVoice::VoiceCallbackStatus, void*), void*);
    DropLowestPriorityVoice(int);
    AppendVoiceList(nn::atk::detail::driver::MultiVoice*);
    FreeVoice(nn::atk::detail::driver::MultiVoice*);
    RemoveVoiceList(nn::atk::detail::driver::MultiVoice*);
    UpdateAllVoiceStatus();
    UpdateAudioFrameVoiceStatus();
    UpdateAllVoices();
    UpdateAudioFrameVoices();
    ChangeVoicePriority(nn::atk::detail::driver::MultiVoice*);
    UpdateAllVoicesSync(unsigned int);
    GetVoiceCount() const;
    GetActiveCount() const;
    GetFreeCount() const;
    GetVoiceList() const;
};

} } } } 
