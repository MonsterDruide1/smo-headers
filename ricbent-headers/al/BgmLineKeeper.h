#pragma once

namespace al { 

class BgmLineKeeper
{
public:
    BgmLineKeeper();
    init(al::BgmDataBase const*, al::AudioInfoListWithParts<al::BgmMusicalInfo> const*, al::SeadAudioPlayer*, char const*, char const*, int, sead::PtrArray<al::BgmParamsChanger>*);
    reset(char const*, int);
    update();
    tryChangeActiveLine();
    clearPlayData();
    clearPlayPointRecord();
    startBgm(al::BgmPlayingRequest const&);
    prepareBgm(al::BgmPlayingRequest const&);
    stopBgm(char const*, int);
    pauseBgm(char const*, int);
    resumeBgm(char const*, int);
    isPlayingBgm();
    isPlayingBgm(char const*);
    isRunningBgm(char const*);
    isPauseActiveBgmLine();
    pauseBgmIfFadeOut(int);
    resumeBgmIfFadeOut(int);
    stopAllBgmLine(int, bool);
    tryStopAllBgmLine(int);
    tryPauseBgmIfNotPlaying(char const*, int);
    tryPauseBgmIfLowPriority(char const*, int);
    startSituation(sead::FixedPtrArray<al::IBgmParamsChanger, 5> const&);
    endSituation(sead::FixedPtrArray<al::IBgmParamsChanger, 5> const&);
    getBgmLineNum() const;
    getBgmLine(int) const;
    getPlayingBgmLine(char const*) const;
    getActiveBgmLine() const;
    getBgmLineByLineName(char const*) const;
    getBgmLineIndex(char const*) const;
    setAudioBusSendController(al::AudioBusSendController*);
};

} 
