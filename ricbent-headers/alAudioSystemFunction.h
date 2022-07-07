#pragma once

namespace alAudioSystemFunction {

getAudioSystemInfo(al::GameSystemInfo const*);
getSeDataBase(al::AudioDirector const*);
getBgmDataBase(al::AudioDirector const*);
tryGetAudioStationedResource(char const*, char const*);
tryGetAudioDebugStationedResource(char const*, char const*);
addAudiioFrameProccess(al::AudioDirector*, aal::IAudioFrameProcess*);
removeAudiioFrameProccess(al::AudioDirector*, aal::IAudioFrameProcess*);
tryLoadAddonSoundArchive(char const*, al::SeadAudioPlayer*);
loadAudioResource(char const*, al::AudioInfoListWithParts<al::AudioResourceLoadGroupInfo>*, al::SeadAudioPlayer*, al::SeadAudioPlayer*);
destroyAudioResource(char const*, al::AudioInfoListWithParts<al::AudioResourceLoadGroupInfo>*, al::SeadAudioPlayer*, al::SeadAudioPlayer*);
tryFindAudioPlayerRegistedSoundMemoryPoolHandler(char const*, al::SeadAudioPlayer*, al::SeadAudioPlayer*);
tryDisableSoundMemoryPoolHandler(char const*, al::SeadAudioPlayer*);
tryDisableSoundMemoryPoolHandlerByFilePath(char const*, al::SeadAudioPlayer*);
setPadRumbleDirectorForSe(al::AudioDirector*, al::PadRumbleDirector*);
getSeadAudioPlayerForSe(al::AudioSystem const*);
getSeadAudioPlayerForBgm(al::AudioSystem const*);
tryCreateBgmMusicalInfoList(char const*, al::BgmDataBase*);
stopAllSound(al::AudioDirector const*, int, bool);
pauseAudioDirector(al::AudioDirector*, bool, unsigned int);
pauseAudioDirectorForDebug(al::AudioDirector*, bool, unsigned int);
pauseBgmDirector(al::AudioDirector*, bool, unsigned int);
pauseAllSeForDemo(al::AudioDirector const*, bool, unsigned int);
pauseAllSe(al::AudioDirector const*, bool, unsigned int);
startBgmDucking(al::AudioDirector const*);
endBgmDucking(al::AudioDirector const*);
clearBgmDataForStepOverScene(al::AudioDirector const*);
softReset(al::AudioDirector const*, al::AudioDirector const*);
notifyIsModeHandheld(al::AudioDirector const*, bool);
getSeSoundHeapUsedSize(al::AudioDirector const*);
getBgmSoundHeapUsedSize(al::AudioDirector const*);
getHeapFreeSize(al::AudioDirector const*);
getHeapSize(al::AudioDirector const*);
enableAudioMaximizer(al::GameSystemInfo const*);
disableAudioMaximizer(al::GameSystemInfo const*);
loadSoundItem(al::IUseSeadAudioPlayer*, unsigned int, unsigned int);
isLoadedSoundItem(al::IUseSeadAudioPlayer*, unsigned int);
saveHeapState(al::IUseSeadAudioPlayer*);
loadHeapState(al::IUseSeadAudioPlayer*, int);
getCurrentHeapStateLevel(al::IUseSeadAudioPlayer*);
getSoundResourceHeapFreeSize(al::IUseSeadAudioPlayer*);
resetDataDependedStage(al::AudioDirector const*, char const*, int);

} 
