#pragma once

namespace al { 

class SePlayer
{
public:
    SePlayer(sead::PtrArray<al::SeRequest>*, al::SeadAudioPlayer*, al::IUseActiveBgmLine const*, al::SeDuckingController*);
    update(al::SePlayerGroupState*, bool, float, float, float, float);
    updateActiveListByLoopSeLimit();
    updateActiveListByTrigSeLimit();
    stop(unsigned int, al::SeEmitter*, unsigned int);
    bringBackRequestToPool(sead::TList<al::SeRequest*>*, al::SeRequest*);
    stopAllFromEmitter(al::SeEmitter*, unsigned int);
    stopActiveAndWaitingSeFromEmitterExeptLevel(al::SeEmitter*, unsigned int);
    stopAll(int, char const*);
    separatePlayingSePosFromEmitter(al::SeEmitter*);
    setLifeTimeForHoldCall(al::SeResourceInfo const*, al::SeEmitter*, unsigned int);
    tryGetCurrentStreamSamplePos(al::SeResourceInfo const*, al::SeEmitter*) const;
    isPlaying(al::SeResourceInfo const*, al::SeEmitter*) const;
    isPlaying() const;
    deactivateSeFromEmitter(al::SeEmitter*, bool);
    reactivateSeFromEmitter(al::SeEmitter*);
    calcPlayingNum() const;
    limitPlayingNum(int);
    stopAndBringBackToPool(al::SeRequest*);
    tryFreeze(char const*, int, char const*);
    tryFreezeOff(char const*, int, char const*);
    addRequest(al::SeRequestParam const*, al::SeCategory const*, int);
    notifiedUpdateMaterial(al::SeEmitter*, char const*, int, al::SeMaterialInfoKeeper const*, al::SePlayerGroup*);
    getOriginalId() const;
    clearState();
    countPlayingNum() const;
    calcTotalVolumeSquared() const;
    tryStopOldestPlayingRequest(bool);
    tryStopMinPlayingVolumeRequest(bool);
    tryGetOldestPlayingFrame() const;
    tryGetMinPlayingVolume() const;
    prepareFinalize();
    bringToDelayList(al::SeRequest*);
};

} 
