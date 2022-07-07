#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class AdvancedWaveSoundPlayer
{
public:
    AdvancedWaveSoundPlayer();
    ~AdvancedWaveSoundPlayer();
    Initialize();
    Finalize();
    TearDownPlayer();
    ReleaseTracks();
    Start();
    Stop();
    Pause(bool);
    Prepare(nn::atk::detail::driver::AdvancedWaveSoundPlayer::PrepareParameter const&);
    SetupPlayer();
    SetupTracks();
    Update();
    UpdateTracks();
    InitializeTrackParams();
    StartClip(nn::atk::detail::driver::AdvancedWaveSoundPlayer::ClipParam*, nn::atk::detail::AdvancedWaveSoundClipInfo*);
    UpdateClip(nn::atk::detail::driver::AdvancedWaveSoundPlayer::ClipParam*, nn::atk::detail::AdvancedWaveSoundClipInfo*);
    ReleaseClip(nn::atk::detail::driver::AdvancedWaveSoundPlayer::ClipParam*);
    StopClip(nn::atk::detail::driver::AdvancedWaveSoundPlayer::ClipParam*);
    OnUpdateFrameSoundThread();
    OnUpdateFrameSoundThreadWithAudioFrameFrequency();
    OnShutdownSoundThread();
};

} } } } 
