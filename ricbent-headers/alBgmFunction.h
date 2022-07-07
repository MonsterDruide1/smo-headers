#pragma once

namespace alBgmFunction {

getBgmPlayInfoList(al::AudioDirector const*);
getBgmResourceInfoList(al::AudioDirector const*);
getBgmStageInfoList(al::AudioDirector const*);
getBgmSituationInfoList(al::AudioDirector const*);
getBgmUserInfoList(al::AudioDirector const*);
tryFindBgmPlayInfo(al::BgmDataBase const*, char const*);
tryFindBgmResourceInfo(al::BgmDataBase const*, char const*);
tryFindBgmStageInfo(al::BgmDataBase const*, char const*);
tryFindBgmSituationInfo(al::BgmDataBase const*, char const*);
tryFindBgmUserInfo(al::BgmDataBase const*, char const*);
isExistBgmPlayInfo(al::BgmDataBase const*, char const*);
isExistBgmResourceInfo(al::BgmDataBase const*, char const*);
isExistBgmStageInfo(al::BgmDataBase const*, char const*);
isExistBgmSituationInfo(al::BgmDataBase const*, char const*);
isExistBgmUserInfo(al::BgmDataBase const*, char const*);
printBgmLineInfoList(al::BgmDataBase const*);
printBgmPlayInfoList(al::BgmDataBase const*);
printBgmResourceInfoList(al::BgmDataBase const*);
printBgmStageInfoList(al::BgmDataBase const*);
printBgmSituationInfoList(al::BgmDataBase const*);
printBgmUserInfoList(al::BgmDataBase const*);
tryLoadIfWaveSound(char const*, al::IAudioResourceLoader*, al::SeadAudioPlayer*);
checkLoadIfWaveSound(char const*, al::SeadAudioPlayer*);
tryGetActiveRhythmDetector(al::IUseActiveBgmLine const*);
tryGetCurrentResourceName(al::IUseActiveBgmLine const*);
tryGetCurrentChordInfo(al::IUseActiveBgmLine const*);
tryGetCurrentBpm(al::IUseActiveBgmLine const*);
tryGetCurrentBeat(al::IUseActiveBgmLine const*);
calcBeatRate(float);
isTriggerBeat(float, float, float);
isTriggerBackBeat(bool, float, int);
tryAllocBgmParamsChanger(sead::PtrArray<al::BgmParamsChanger>*, char const*, char const*, bool, bool);
tryFindBgmParamsChanger(sead::PtrArray<al::BgmParamsChanger>*, char const*, char const*, bool, bool);
tryFindOrAllocBgmParamsChanger(sead::PtrArray<al::BgmParamsChanger>*, char const*, char const*, bool, bool);
releaseBgmParamsChanger(sead::PtrArray<al::BgmParamsChanger>*, al::IBgmParamsChanger*, bool, bool);
tryFindAndReleaseBgmParamsChanger(sead::PtrArray<al::BgmParamsChanger>*, char const*, char const*, bool, bool);
calcBgmChangeableParamsFromParamsChanger(al::BgmChangeableParams&, sead::PtrArray<al::BgmParamsChanger>*);
calcBgmChangeableParamsFromParamsChangerIF(al::BgmChangeableParams&, sead::PtrArray<al::IBgmParamsChanger>*);
mergeBgmChangeableParams(al::BgmChangeableParams&, al::BgmChangeableParams&);
setBgmSituationToParamsChanger(sead::FixedPtrArray<al::IBgmParamsChanger, 5>&, sead::PtrArray<al::BgmParamsChanger>*, al::AudioInfoListWithParts<al::BgmSituationInfo> const*, char const*, char const*, bool, bool, bool);
setBgmSituationToParamsChanger(sead::FixedPtrArray<al::IBgmParamsChanger, 5>&, sead::PtrArray<al::BgmParamsChanger>*, al::AudioInfoListWithParts<al::BgmSituationInfo> const*, char const*, bool, bool, bool);
setBgmSituationForChangeToParamsChanger(sead::FixedPtrArray<al::IBgmParamsChanger, 5>&, sead::PtrArray<al::BgmParamsChanger>*, al::AudioInfoListWithParts<al::BgmSituationInfo> const*, al::BgmRelationalSituationInfo const*, char const*, bool, bool);

} 
