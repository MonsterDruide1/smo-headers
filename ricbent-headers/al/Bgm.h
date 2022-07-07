#pragma once

namespace al { 

class Bgm
{
public:
    Bgm();
    init(al::BgmDataBase const*, al::SeadAudioPlayer*);
    update();
    changeSpeakerParamMode(bool, bool);
    isRunning() const;
    isPause() const;
    stopBgmLocal(bool);
    reset(al::BgmResourceInfo const*, al::BgmResourceSuffixInfo const*);
    startBgm(al::BgmResourceInfo const*, al::BgmResourceSuffixInfo const*, long, int, int, bool);
    startBgmLocal(al::BgmResourceInfo const*, al::BgmResourceSuffixInfo const*, long, int, int, bool, bool);
    startBgmBySuffixLoop(al::BgmResourceInfo const*, al::BgmResourceSuffixInfo const*, long, int, int, bool);
    prepareBgm(al::BgmResourceInfo const*, al::BgmResourceSuffixInfo const*, long, int, int, bool, bool);
    startPreparedBgm(al::BgmPlayingRequest const&);
    startPreparedBgmExistingRequest();
    initBgmDspModules(al::AcLSoundHandle*);
    pauseBgm(int);
    resumeBgm(int);
    resumeBgmFromThisPosition(long, int);
    stopBgmImmediately(bool);
    stopBgm(int);
    resumeBgmFromFadeOut(int);
    isRunning(al::BgmResourceInfo const*) const;
    isFadeOutNow() const;
    isFadeInNow() const;
    isEnableResumingFromFadeOut(al::BgmResourceInfo const*);
    getCurSamplePosition() const;
    tryGetCurSamplePosition(long*);
    getRunningResourceName();
    getRunningResourceCategoryName();
    isEnableChangeTrack() const;
    changeTrack(int, float, int);
    changeRegion(al::BgmRegionChangeParams const&);
    addParamsChanger(al::IBgmParamsChanger*);
    removeParamsChanger(sead::FixedPtrArray<al::IBgmParamsChanger, 5> const&);
    changeParams();
    tryGetBgmSampleDataInfo(al::BgmSampleDataInfo*) const;
    setSpeakerParam(al::SpeakerParam*, float, float, float);
    changeFader(float, int);
};

} 
