#pragma once

namespace al { 

class SePlayerGroupKeeper
{
public:
    SePlayerGroupKeeper(al::SeadAudioPlayer*, al::AudioEffectLevelDetector*, al::IUseActiveBgmLine const*, al::SeDuckingController*, int, int, unsigned int*, int, float);
    update(float, bool);
    addRequest(al::SeRequestParam const*, al::SeCategory const*);
    stop(unsigned int, al::SeEmitter*, unsigned int, bool);
    stopAll(unsigned int, bool, char const*, char const*);
    clearAllFreezedSe(bool);
    stopActiveAndWaitingSeFromEmitterExeptLevel(al::SeEmitter*, unsigned int);
    separatePlayingSePosFromEmitter(al::SeEmitter*);
    tryGetCurrentStreamSamplePos(al::SeResourceInfo const*, al::SeEmitter*) const;
    notifyIsModeHandheld(bool);
    setLifeTimeForHoldCall(al::SeResourceInfo const*, al::SeEmitter*, unsigned int);
    isPlaying(al::SeResourceInfo const*, al::SeEmitter*) const;
    notifiedUpdateMaterial(al::SeEmitter*, char const*, int, al::SeMaterialInfoKeeper const*);
    pause(bool, char const*, char const*, unsigned int);
    setStateIsAfterGoal(bool);
    setIsExcludeCmNgSe();
    deactivateSeFromEmitter(al::SeEmitter*, bool);
    reactivateSeFromEmitter(al::SeEmitter*);
    stopAllFromEmitter(al::SeEmitter*, unsigned int);
    setAudioBusSendController(al::AudioBusSendController*);
    prepareFinalize();
};

} 
