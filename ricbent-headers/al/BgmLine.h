#pragma once

namespace al { 

class BgmLine
{
public:
    BgmLine();
    init(al::BgmDataBase const*, al::AudioInfoListWithParts<al::BgmMusicalInfo> const*, al::SeadAudioPlayer*, al::BgmLineInfo const*, char const*, int, al::BgmPlayPointRecorder*, sead::PtrArray<al::BgmParamsChanger>*);
    initLinePlayInfoList(char const*, int);
    reset(char const*, int);
    isLoadedResource(char const*);
    update();
    clearBgmLine();
    startSuffixLoopBgm(al::BgmPlayingRequest const&);
    clearPlayData();
    startBgm(al::BgmPlayingRequest const&);
    isRunningBySameBgm(al::BgmLinePlayInfo*) const;
    resumeBgm(int, bool);
    startPreparedBgm(al::BgmPlayingRequest const&);
    getPastActiveBgmPlayer() const;
    stopBgm(int);
    prepareBgm(al::BgmPlayingRequest const&);
    startWaitingBgm();
    pauseBgm(int);
    pauseUnActiveBgmPlayer(int);
    resumeUnActiveBgmPlayer(int);
    resumeBgmInLineChange();
    stopAllBgmPlayer(int, bool);
    startSituation(sead::FixedPtrArray<al::IBgmParamsChanger, 5> const&);
    endSituation(sead::FixedPtrArray<al::IBgmParamsChanger, 5> const&);
    startFaderManualMode();
    changePlayerFader(char const*, float, float);
    endFaderManualMode();
    getPrepareBgmPlayer();
    isRunning() const;
    isPause() const;
    isWaitStart() const;
    isFadeOut() const;
    isPrepared() const;
    isPreparedByPlayName(char const*) const;
    isRunningByPlayName(char const*) const;
    isUnnecessaryPrepare(char const*) const;
    isEnableRhythmDetection() const;
    getCurPlayName() const;
    getCurResourceName() const;
    getLineName() const;
    getResourceName(char const*) const;
    getLineIndex() const;
    getCurBpm() const;
    setAudioBusSendController(al::AudioBusSendController*);
    replacePlayInfoResourceName(char const*, char const*);
    isDifferentLinePlayInfoResourceNameBeforeAndAfterReset();
    getUnactiveBgmPlayerIndex() const;
    tryGetBgmEnableSituationInfo(char const*);
    tryGetBgmLinePlayInfo(al::BgmPlayingRequest const&);
    isPlaying() const;
};

} 
