#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class StreamSoundPlayer
{
public:
    StreamSoundPlayer();
    ~StreamSoundPlayer();
    Initialize();
    TryAllocLoader();
    Finalize();
    FinishPlayer();
    FreeStreamBuffers();
    FreeVoices();
    FreeLoader();
    Setup(nn::atk::detail::driver::StreamSoundPlayer::SetupArg const&);
    SetupTrack(nn::atk::detail::driver::StreamSoundPlayer::SetupArg const&);
    Prepare(nn::atk::detail::driver::StreamSoundPlayer::PrepareArg const&);
    SetPrepareBaseArg(nn::atk::detail::driver::StreamSoundPlayer::PrepareBaseArg const&);
    RequestLoadHeader(nn::atk::detail::driver::StreamSoundPlayer::PrepareArg const&);
    PreparePrefetch(nn::atk::detail::driver::StreamSoundPlayer::PreparePrefetchArg const&);
    ReadPrefetchFile(nn::atk::detail::StreamSoundPrefetchFileReader&);
    ApplyStreamDataInfo(nn::atk::detail::StreamDataInfoDetail const&);
    SetupPlayer();
    AllocVoices();
    LoadPrefetchBlocks(nn::atk::detail::StreamSoundPrefetchFileReader&);
    Start();
    StartPlayer();
    Stop();
    Pause(bool);
    UpdatePauseStatus();
    IsLoadingDelayState() const;
    IsBufferEmpty() const;
    ReadStreamSoundDataInfo(nn::atk::StreamSoundDataInfo*) const;
    GetPlaySamplePosition(bool) const;
    GetFilledBufferPercentage() const;
    GetBufferBlockCount(nn::atk::WaveBuffer::Status) const;
    GetTotalBufferBlockCount() const;
    LoadHeader(bool, nn::audio::AdpcmParameter**, unsigned short);
    CheckPrefetchRevision(nn::atk::detail::StreamDataInfoDetail const&) const;
    AllocStreamBuffers();
    UpdateLoadingBlockIndex();
    LoadStreamData(bool, nn::atk::detail::LoadDataParam const&, unsigned short);
    LoadStreamData(bool, nn::atk::detail::LoadDataParam const&, unsigned short, bool, unsigned int, unsigned long);
    IsStoppedByLoadingDelay() const;
    VoiceCallbackFunc(nn::atk::detail::driver::MultiVoice*, nn::atk::detail::driver::MultiVoice::VoiceCallbackStatus, void*);
    Update();
    UpdateBuffer();
    UpdateVoiceParams(nn::atk::detail::driver::StreamTrack*);
    CheckDiskDriveError() const;
    SetOutputParam(nn::atk::detail::OutputParam*, nn::atk::detail::OutputParam const&, nn::atk::detail::driver::StreamSoundPlayer::TrackData const&);
    ApplyTvOutputParamForMultiChannel(nn::atk::detail::OutputParam*, nn::atk::detail::driver::MultiVoice*, int, nn::atk::MixMode);
    MixSettingForOutputParam(nn::atk::detail::OutputParam*, int, nn::atk::MixMode);
    GetOriginalPlaySamplePosition(long, nn::atk::detail::StreamDataInfoDetail const&) const;
    IsValidStartOffset(nn::atk::detail::StreamDataInfoDetail const&);
    ApplyTrackDataInfo(nn::atk::detail::StreamDataInfoDetail const&);
    GetStartOffsetSamples(nn::atk::detail::StreamDataInfoDetail const&);
    PreparePrefetchOnLastBlock(nn::atk::detail::driver::StreamSoundPlayer::PrefetchLoadDataParam*, nn::atk::detail::driver::StreamSoundPlayer::PrefetchIndexInfo const&);
    PreparePrefetchOnLoopStartBlock(nn::atk::detail::driver::StreamSoundPlayer::PrefetchLoadDataParam*, nn::atk::detail::driver::StreamSoundPlayer::PrefetchIndexInfo const&, nn::atk::detail::StreamSoundPrefetchFileReader&);
    PreparePrefetchOnLoopBlock(nn::atk::detail::driver::StreamSoundPlayer::PrefetchLoadDataParam*, nn::atk::detail::driver::StreamSoundPlayer::PrefetchIndexInfo const&, unsigned int);
    PreparePrefetchOnNormalBlock(nn::atk::detail::driver::StreamSoundPlayer::PrefetchLoadDataParam*, unsigned int, nn::atk::detail::StreamSoundPrefetchFileReader&);
    SetAdpcmLoopInfo(nn::atk::detail::StreamSoundPrefetchFileReader&, nn::atk::detail::StreamDataInfoDetail const&, nn::audio::AdpcmParameter*, nn::atk::AdpcmContextNotAligned*);
    SetAdpcmInfo(nn::atk::detail::StreamSoundPrefetchFileReader&, nn::atk::detail::StreamDataInfoDetail const&, nn::audio::AdpcmParameter*, nn::atk::AdpcmContextNotAligned*);
    SetTrackVolume(unsigned int, float);
    SetTrackInitialVolume(unsigned int, unsigned int);
    SetTrackOutputLine(unsigned int, unsigned int);
    ResetTrackOutputLine(unsigned int);
    SetTrackTvVolume(unsigned int, float);
    SetTrackChannelTvMixParameter(unsigned int, unsigned int, nn::atk::MixParameter const&);
    SetTrackTvPan(unsigned int, float);
    SetTrackTvSurroundPan(unsigned int, float);
    SetTrackTvMainSend(unsigned int, float);
    SetTrackTvFxSend(unsigned int, nn::atk::AuxBus, float);
    GetPlayerTrack(int);
    GetPlayerTrack(int) const;
    OnUpdateFrameSoundThread();
    OnUpdateFrameSoundThreadWithAudioFrameFrequency();
    OnShutdownSoundThread();
    g_AssignNumberCount;
};

} } } } 
