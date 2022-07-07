#pragma once

namespace CapManHeroDemoUtil {

initCapManHeroDemoDirector(al::Scene const*, al::ActorInitInfo const&);
initCapManHeroTailJointController(al::LiveActor*);
startCapManHeroCommonSettingAfterShowModel(al::LiveActor*);
createDemoCapManHero(char const*, al::ActorInitInfo const&, char const*);
capManHeroControl(al::LiveActor*);
stopTailScroll(al::LiveActor*);
restartTailScroll(al::LiveActor*);
getCapManHero(al::IUseSceneObjHolder const*);
setTalkDemoFirstMoonGet(StageTalkDemoNpcCap*);
setTalkDemoStageStart(StageTalkDemoNpcCap*);
setTalkDemoMoonRock(StageTalkDemoNpcCap*);
preEventFromSceneFirstMoonGet(al::Scene const*, char const*);
startTalkDemoFirstMoonGet(al::Scene const*);
startTalkDemoStageStart(al::Scene const*);
startTalkDemoMoonRockFind(al::Scene const*);
startTalkDemoAfterMoonRockBreakDemo(al::Scene const*);
isExistTalkDemoStageStart(al::Scene const*);
isExistTalkDemoMoonRockFind(al::Scene const*);
isExistTalkDemoAfterMoonRockBreakDemo(al::Scene const*);
isEndDemo(al::Scene const*);
tryCloseDemoFadeIfExistStageStartTalk(al::LiveActor const*);
startActionCapManHero(al::LiveActor*, char const*);
calcAngleDemoPlayerToTargetH(al::LiveActor const*, sead::Vector3<float> const&);
turnDemoPlayerToTargetH(al::LiveActor const*, sead::Vector3<float> const&, float);
isEnablePlayerTurnNeck(al::LiveActor*, float);
tryPlayerTurnNeck(al::LiveActor*, sead::Vector3<float> const&);
invalidateDitherAnimIfExist(al::LiveActor*);

} 
