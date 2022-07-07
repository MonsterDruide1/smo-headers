#pragma once

namespace al { 

class AcLSoundHandle
{
public:
    isPause() const;
    getVolume() const;
    setPitch(float);
    setSurroundPan(float);
    setAudioBusSend(al::AudioBusSend const&);
    setMainSend(float);
    setEffectSend(nn::atk::AuxBus, float);
    setLpfFreq(float);
    setBiquadFilter(int, float);
    readSeqGlobalVariable(int, short*);
    writeSeqGlobalVariable(int, short);
    readSeqLocalVariable(int, short*);
    writeSeqLocalVariable(int, short);
    readSeqTrackVariable(int, int, short*);
    writeSeqTrackVariable(int, int, short);
    setSeqTempoRatio(float);
    setOutputDeviceSpeakerVolume(int, float, float, float, float, float, float);
    setAllOutputDeviceSpeakerVolume(float, float, float, float, float, float, int, int);
    setChannelMixParameter(int, nn::atk::MixParameter const&);
    setChannelMixParameter(nn::atk::MixParameter const&);
    setMixModePan();
    setStreamTrackToLRLsRsCLfe(float, float);
    AcLSoundHandle();
    detachSound();
    stop(int);
    pause(int);
    unpause(int);
    setVolume(float, int);
    isWaveSound() const;
    isStreamSound() const;
    isSequenceSound() const;
    isStereoWaveSound() const;
    isAttachedSound() const;
};

} 
