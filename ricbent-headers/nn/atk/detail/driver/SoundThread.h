#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class SoundThread
{
public:
    SoundThread();
    GetInstance();
    ~SoundThread();
    CreateSoundThread(int, void*, unsigned long, int, unsigned int);
    Initialize(void*, unsigned long, bool, bool);
    Destroy();
    Finalize();
    UpdateLowLevelVoices();
    ForceWakeup();
    RegisterSoundFrameUserCallback(void (*)(unsigned long), unsigned long);
    ClearSoundFrameUserCallback();
    RegisterThreadBeginUserCallback(void (*)(unsigned long), unsigned long);
    ClearThreadBeginUserCallback();
    RegisterThreadEndUserCallback(void (*)(unsigned long), unsigned long);
    ClearThreadEndUserCallback();
    RegisterSoundFrameCallback(nn::atk::detail::driver::SoundThread::SoundFrameCallback*);
    UnregisterSoundFrameCallback(nn::atk::detail::driver::SoundThread::SoundFrameCallback*);
    RegisterPlayerCallback(nn::atk::detail::driver::SoundThread::PlayerCallback*);
    UnregisterPlayerCallback(nn::atk::detail::driver::SoundThread::PlayerCallback*);
    LockAtkStateAndParameterUpdate();
    UnlockAtkStateAndParameterUpdate();
    RegisterAudioRendererPerformanceReader(nn::atk::AudioRendererPerformanceReader&);
    RegisterSoundThreadUpdateProfileReader(nn::atk::AtkProfileReader<nn::atk::SoundThreadUpdateProfile>&);
    UnregisterSoundThreadUpdateProfileReader(nn::atk::AtkProfileReader<nn::atk::SoundThreadUpdateProfile>&);
    RegisterSoundThreadInfoRecorder(nn::atk::detail::ThreadInfoRecorder&);
    UnregisterSoundThreadInfoRecorder(nn::atk::detail::ThreadInfoRecorder&);
    FrameProcess(nn::atk::UpdateType);
    RecordPerformanceInfo(nn::audio::PerformanceInfo&, nn::os::Tick, nn::os::Tick, unsigned int);
    EffectFrameProcess();
    RecordUpdateProfile(nn::atk::SoundThreadUpdateProfile const&);
    Run(void*);
    ThreadMessageBufferSize;
    RendererEventWaitTimeoutMilliSeconds;
};

} } } } 
