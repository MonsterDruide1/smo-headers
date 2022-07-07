#pragma once

namespace al { 

class BgmDirector
{
public:
    BgmDirector();
    init(al::AudioSystemInfo const*, al::AudioDirector const*, al::BgmDirectorInitInfo const&, char const*, int);
    setDependentModule(al::BgmDirector*);
    reset(char const*, int);
    update();
    clearPlayData();
    enableLineChange();
    finalize();
    startBgm(al::BgmPlayingRequest const&, bool);
    prepareBgm(al::BgmPlayingRequest const&);
    stopBgm(char const*, int);
    endSituation(char const*, bool, bool);
    pauseBgm(char const*, int);
    resumeBgm(char const*, int);
    isPlayingBgm();
    isPlayingBgm(char const*);
    isRunningBgm(char const*);
    pauseBgmById(unsigned int, int, bool);
    updatePauseIdForPause(unsigned int);
    pauseBgmIfFadeOut(int);
    resumeBgmById(unsigned int, int, bool);
    updatePauseIdForResume(unsigned int);
    resumeBgmIfFadeOut(int);
    stopAllBgm(int, bool);
    stopAllBgmWithoutUpperLayer(int);
    tryStopAllBgm(int);
    setTriggerEventForStopAllBgm(al::FunctorBase const&);
    tryPauseBgmIfNotPlaying(char const*, int);
    tryPauseBgmIfLowPriority(char const*, int);
    startSituation(char const*, bool, bool, bool);
    startSituation(sead::PtrArray<al::IBgmParamsChanger>*, char const*, bool, bool, bool);
    endSituation(sead::PtrArray<al::IBgmParamsChanger>*, char const*, bool, bool);
    disableLineChange();
    isDisableLineChange();
    isUsedLineGroupName(char const*) const;
    getPlayingBgmLine(char const*) const;
    getBgmLineByLineName(char const*) const;
    getActiveBgmLine() const;
    getActiveBgmLineWithoutUpperLayer() const;
    getLoopEndSamplePosition(char const*) const;
    setAudioBusSendController(al::AudioBusSendController*);
    tryAllocMultiPlayingController();
    tryReleaseMultiPlayingController(al::BgmMultiPlayingController*);
    deactiveAllBgmMultiPlayingController(int);
    getBgmLineNum(bool);
    getBgmLineAccessor(int, bool);
    getBgmLineIndex(char const*, bool) const;
};

} 
