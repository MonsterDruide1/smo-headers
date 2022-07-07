#pragma once

namespace SessionMusicianLocalFunction {

getMusicianType(al::LiveActor const*);
isMusicianType(al::LiveActor const*, SessionMusicianType);
isSubscribed(al::LiveActor const*, SessionMusicianType);
isAlreadySessionMember(SessionMusicianNpc const*);
entryMusicianToManager(SessionMusicianNpc*);
getMemberMusicianNum(al::LiveActor const*);
isSessionFullMember(al::LiveActor const*);
startPlayingTheBa(al::LiveActor const*);
startPlayingTheDs(al::LiveActor const*);
startPlayingTheGt(al::LiveActor const*);
startPlayingTheTp(al::LiveActor const*);
endPlayingTheBa(al::LiveActor const*);
endPlayingTheDs(al::LiveActor const*);
endPlayingTheGt(al::LiveActor const*);
endPlayingTheTp(al::LiveActor const*);
tryCreateSessionMusicianManager(al::IUseSceneObjHolder const*);
getSessionMusicianManager(al::IUseSceneObjHolder const*);
isExistSessionMusicianManager(al::IUseSceneObjHolder const*);
tryStartWarpToSessionMayor(al::IUseSceneObjHolder const*, al::PlacementInfo*);
entrySessionMayorToManager(SessionMayorNpc*);
isJoinedSessionMusician(al::IUseSceneObjHolder const*);
tryGetJoinedSessionMusicanActor(al::IUseSceneObjHolder const*);
tryAddJoinedSessionMusicianDemoActor(al::IUseSceneObjHolder const*);
tryGetSessionMoonGetDemoPlayerPos(sead::Vector3<float>*, al::IUseSceneObjHolder const*);
tryGetSessionMoonGetDemoPlayerPose(sead::Quat<float>*, al::IUseSceneObjHolder const*);
trySetJoinedSessionMusicianTransformForMoonGetDemo(al::IUseSceneObjHolder const*);
addDemoAllMusicians(al::IUseSceneObjHolder const*);

} 
