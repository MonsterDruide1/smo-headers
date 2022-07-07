#pragma once

namespace al { 

class SePlayerGroup
{
public:
    SePlayerGroup(al::SeadAudioPlayer*, al::IUseActiveBgmLine const*, al::SeDuckingController*, int, int, unsigned int*, int, al::SePlayerGroupInfo*);
    update(float, float, float);
    sortActiveListAscByPriority();
    countPlayingNum() const;
    calcTotalVolumeAndLimitedNum();
    addRequest(al::SeRequestParam const*, al::SeCategory const*);
    stop(unsigned int, al::SeEmitter*, unsigned int, bool);
    stopAllFromEmitter(al::SeEmitter*, unsigned int);
    stopActiveAndWaitingSeFromEmitterExeptLevel(al::SeEmitter*, unsigned int);
    stopAll(unsigned int, bool, char const*, char const*);
    clearAllFreezedSe(bool);
    separatePlayingSePosFromEmitter(al::SeEmitter*);
    isPlaying(al::SeResourceInfo const*, al::SeEmitter*) const;
    setLifeTimeForHoldCall(al::SeResourceInfo const*, al::SeEmitter*, unsigned int);
    tryGetCurrentStreamSamplePos(al::SeResourceInfo const*, al::SeEmitter*) const;
    deactivateSeFromEmitter(al::SeEmitter*, bool);
    reactivateSeFromEmitter(al::SeEmitter*);
    pause(bool, char const*, char const*, unsigned int);
    notifiedUpdateMaterial(al::SeEmitter*, char const*, int, al::SeMaterialInfoKeeper const*);
    setIsExcludeCmNgSe(bool);
    setStateIsAfterGoal(bool);
    setAudioBusSendController(al::AudioBusSendController*);
    prepareFinalize();
    setHdrVolume(float, int);
    countFreezedPlayingNum() const;
};

} 
