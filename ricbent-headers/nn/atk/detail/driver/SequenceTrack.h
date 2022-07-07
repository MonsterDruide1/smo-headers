#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class SequenceTrack
{
public:
    SetPlayerTrackNo(int);
    SequenceTrack();
    InitParam();
    ~SequenceTrack();
    Close();
    SetSeqData(void const*, int);
    Open();
    ReleaseAllChannel(int);
    FreeAllChannel();
    UpdateChannelLength();
    UpdateChannelRelease(nn::atk::detail::driver::Channel*);
    ParseNextTick(bool);
    StopAllChannel();
    UpdateChannelParam();
    PauseAllChannel(bool);
    AddChannel(nn::atk::detail::driver::Channel*);
    GetChannelCount() const;
    ChannelCallbackFunc(nn::atk::detail::driver::Channel*, nn::atk::detail::driver::Channel::ChannelCallbackStatus, void*);
    SetMute(nn::atk::SequenceMute);
    SetSilence(bool, int);
    SetBiquadFilter(int, float);
    SetBankIndex(int);
    SetTranspose(signed char);
    SetVelocityRange(unsigned char);
    SetOutputLine(int);
    GetTrackVariable(int) const;
    SetTrackVariable(int, short);
    GetVariablePtr(int);
    NoteOn(int, int, int, bool);
    CallStackDepth;
    DefaultPriority;
    DefaultBendRange;
    DefaultPortaKey;
    InvalidEnvelope;
    MaxEnvelopeValue;
    ParserParamSize;
    TrackVariableCount;
    PauseReleaseValue;
    MuteReleaseValue;
};

} } } } 
