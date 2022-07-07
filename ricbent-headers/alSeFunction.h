#pragma once

namespace alSeFunction {

getSeKeeper(al::IUseAudioKeeper const*);
tryGetSeKeeper(al::IUseAudioKeeper const*);
tryGetSeUserName(al::IUseAudioKeeper const*);
getSeDirector(al::IUseAudioKeeper const*);
getSeBarrierKeeper(al::IUseAudioKeeper const*);
getSeListener(al::IUseAudioKeeper const*, int);
getSeListenerPosition(al::IUseAudioKeeper const*, int);
isSeShape3DPoint(char const*);
isSeShape3DSphere(char const*);
isSeShape3DVector(char const*);
isSeShape3DPlane(char const*);
isSeShape3DRing(char const*);
isSeShape3DCube(char const*);
createSeShape(al::SeShapePose*, al::SeShapeInfo const*);
stopAllSe(al::AudioDirector const*, unsigned int);
stopAllOneShotSe(al::AudioDirector const*, unsigned int, char const*);
stopAllOneShotSe(al::IUseAudioKeeper const*, unsigned int, char const*);
clearAllFreezedSe(al::AudioDirector const*);
clearAllFreezedOneShotSe(al::AudioDirector const*);
stopAllSeWithExceptList(al::AudioDirector const*, char const*, unsigned int);
setIsStateAfterGoal(al::AudioDirector const*, bool);
setIsStateAfterGoal(al::IUseAudioKeeper*, bool);
setIsExcludeCmNgSe(al::AudioDirector const*);
separatePlayingSePosFromEmitter(al::IUseAudioKeeper const*);
tryStartStageStartSe(al::IUseAudioKeeper const*);
tryHoldStageStartSe(al::IUseAudioKeeper const*);
tryStopStageStartSe(al::IUseAudioKeeper const*);
tryStartDefaultAtmosphereSe(al::IUseAudioKeeper const*);
tryStopDefaultAtmosphereSe(al::IUseAudioKeeper const*);
loadSoundArchive(al::IAudioResourceLoader*, al::SeArchiveLoadingInfo const*, al::AudioInfoListWithParts<al::SeUserInfo> const*, bool);
startSituationWithAutoEnd(al::AudioDirector*, char const*, int, int, int);
startSituation(al::AudioDirector*, char const*, int);
endSituation(al::AudioDirector*, char const*, int);
startSituation(al::IUseAudioKeeper const*, char const*, int);
endSituation(al::IUseAudioKeeper const*, char const*, int);
checkIsActiveSituation(al::IUseAudioKeeper const*, char const*);
setDirectorCameraWaterRate(al::IUseAudioKeeper const*, float);
setSePlayProhibitList(al::IUseAudioKeeper const*, char const**, int);
resetSePlayProhibitList(al::IUseAudioKeeper const*);
setListenerParamByCamera(al::SeDirector*, int, al::IUseCamera const*, int);
startListenerPoser(al::SeDirector*, char const*, int);
endListenerPoser(al::SeDirector*, char const*, int);
startListenerPoser(al::AudioDirector*, char const*, int);
endListenerPoser(al::AudioDirector*, char const*, int);
startListenerPoser(al::IUseAudioKeeper const*, char const*, int);
endListenerPoser(al::IUseAudioKeeper const*, char const*, int);
updateSeParamListWithResInfo(al::SePlayParamList*, al::SeResourceInfo const*, bool);
updateSeParamListWithMeInfos(al::SePlayParamList*, al::BgmChordInfo const*, float, al::MeInfoList const*, al::MeInfo const*);
conveySpeakerParamToHandle(al::SpeakerParam const*, al::AcLSoundHandle*, bool, float const*, int, bool);
conveyParamListToHandle(al::SePlayParamList const*, float, float, al::AcLSoundHandle*, float*, bool);
calcRollOff(al::SeRollOffCurveType, float, float, float, float, float, float);
killSeFromEmitters(al::SeDirector*, al::SeEmitterHolder*);
startClippedSeFromEmitters(al::SeDirector*, al::SeEmitterHolder*);
endClippedSeFromEmitters(al::SeDirector*, al::SeEmitterHolder*);
stopAllFromEmitter(al::SeDirector*, al::SeEmitter*, unsigned int);
isToCalcSpeakerParamStereo(al::SeResourceInfo const*);
calcDecibelToPriorityCoef(float, float, float);
tryFindVoiceLabelFromChar(char16_t);
tryFindVoiceLabelFromCharUsEu(char16_t, char16_t);
tryFindVoiceLabelRandomFromChar(char16_t);
startSeFromUpperLayerSeKeeper(al::IUseAudioKeeper const*, char const*);
startSeLoopSequence(al::IUseAudioKeeper const*, char const*, al::MeInfo const*, int);

} 
