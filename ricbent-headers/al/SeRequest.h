#pragma once

namespace al { 

class SeRequest
{
public:
    compareSeRequestByDistanceAsc(al::SeRequest* const*, al::SeRequest* const*);
    compareSeRequestByPriorityDesc(al::SeRequest* const*, al::SeRequest* const*);
    SeRequest();
    updatePre();
    updateLifeTime();
    isToFinishPlaying() const;
    pause();
    stop(int);
    getOrCalcDistance();
    updatePost(al::SeadAudioPlayer*, al::BgmChordInfo const*, float, bool, float, al::SeCategory const*, float, float, float);
    tryCalcRtpcParam(float*, float*, char const**, al::SeRtpcSetting const*);
    playStart(al::SeadAudioPlayer*);
    updatePlayCount();
    calcFinalVolumeAndPrio(bool, float, float);
    tryRequestBusSend(al::SeCategory const*, al::SePlayParamList const*);
    clear();
    stopIfEqualIdOrOriginalId(unsigned int, al::SeEmitter*, int);
    getOriginalId() const;
    setNew(al::SeRequestParam const*, int);
    separatePlayingPosFromEmitter();
    setNewAgain();
    tryPauseBySystem(bool, unsigned int);
    isStereoWaveSound() const;
    isWaveSound() const;
    verifyData() const;
    extendHold(float, char const*, sead::Vector3<float> const*);
    tryGetCurrentStreamSamplePos(al::SeadAudioPlayer*) const;
    isEqual(al::SeResourceInfo const*, al::SeEmitter const*) const;
    isEqualSource(al::SeEmitter*) const;
    updateWaitFrame();
    getWaveVolumeDb() const;
    getStartFrame() const;
    setLifeTimeForHoldCall(int);
    setPlayWithSeLimitDelay(int, float);
    compareNewSeAscDistanceAsc(al::SeRequest* const*, al::SeRequest* const*);
    getDistanceDecayVolume() const;
    getResourceVolume(al::SeadAudioPlayer const*) const;
    getResourceVolumePrioCoef(al::SeadAudioPlayer const*) const;
    getWaveVolume() const;
    isStreamSound() const;
    isSequenceSound() const;
    getAssumedVoiceNum() const;
    prepareFinalize(al::SeCategory const*);
};

} 
