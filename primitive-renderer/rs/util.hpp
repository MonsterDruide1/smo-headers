#pragma once
#include "al/scene/Scene.h"
#include "game/Player/PlayerActorHakoniwa.h"
#include "sead/math/seadVector.h"
#include "al/scene/SceneObjHolder.h"
#include "game/Actors/CheckpointFlag.h"

namespace al
{
    class LiveActor;
    class SensorMsg;
}

class Shine;

namespace rs
{
    uint32_t getStageShineAnimFrame(const al::LiveActor *, const char *);

    PlayerActorHakoniwa* getPlayerActor(const al::Scene *);
	sead::Vector3f *getPlayerPos(al::LiveActor const*);

	void registerCheckpointFlagToWatcher(CheckpointFlag*);

    bool isInChangeStageArea(al::LiveActor const*, sead::Vector3f const *);

    bool isInvalidChangeStage(al::LiveActor const *);

    bool isMsgCapTouchWall(al::SensorMsg const *);

	bool isPlayer2D(al::LiveActor const*);
	
	void faceToCamera(al::LiveActor *);

    void buyCap(al::IUseSceneObjHolder const *, char const*);

    int getActiveQuestNum(al::IUseSceneObjHolder const *);
    int getActiveQuestNo(al::IUseSceneObjHolder const *);
    const char *getActiveQuestLabel(al::IUseSceneObjHolder const *);
    void requestShowHtmlViewer(al::IUseSceneObjHolder const *);

	bool requestStartDemoNormal(al::LiveActor *, bool);
	bool requestStartDemoNormal(al::Scene const*);
	bool requestStartDemoNormalWithCinemaFrame(al::LiveActor *);
	bool requestStartDemoWithPlayer(al::LiveActor *,bool);
	bool requestStartDemoWithPlayer(al::Scene const*);
	bool requestStartDemoWithPlayerCinemaFrame(al::LiveActor *,bool);
	bool requestStartDemoWithPlayerKeepCarry(al::LiveActor *,bool);
	bool requestStartDemoWithPlayerUseCoin(al::LiveActor *,bool);
	bool requestStartDemoWithPlayerKeepBindTalk(al::LiveActor *,bool);
	bool requestStartDemoKeepHackTalk(al::LiveActor *,bool);
	bool requestStartDemoWithPlayerCinemaFrameTalk(al::LiveActor *,bool);
	bool requestStartDemoWithPlayerKeepCarryTalk(al::LiveActor *,bool);
	bool requestStartDemoWithPlayerUseCoinTalk(al::LiveActor *,bool);
	bool requestStartDemoNormalTalk(al::LiveActor *,bool);
	bool requestStartDemoWarpToCheckpoint(al::Scene const*);
	bool requestStartDemoBossBattleStart(al::LiveActor *);
	bool requestStartDemoBossBattleEnd(al::LiveActor *);
	bool requestStartDemoShineGet(Shine *);
	bool requestStartDemoAchievementShineGet(al::Scene *);
	bool requestStartDemoShineDotGet(Shine *);
	bool requestStartDemoShineMainGet(Shine *);
	bool requestStartDemoShineGrandGet(Shine *);
	bool requestStartDemoShineAppear(al::LiveActor *);
	bool requestStartDemoShineAppear(al::Scene const*);
	bool requestStartDemoWarp(al::LiveActor *);
	bool requestStartDemoWarp(al::Scene const*);
	bool requestStartDemoHackStart(al::LiveActor *);
	bool requestStartDemoAppearByBazookaElectric(al::LiveActor *);
	bool requestStartDemoLaunchBazookaElectric(al::LiveActor *);
	bool requestStartDemoSceneStartPlayerWalk(al::LiveActor *);
	bool requestStartDemoGetLifeMaxUpItem(al::LiveActor *);
	bool requestStartDemoBirdCarryMeat(al::LiveActor *);
	bool requestStartDemoBirdFindMeat(al::LiveActor *);
	bool requestStartDemoGetTimeBalloon(al::LiveActor *);
	bool requestStartDemoJango(al::LiveActor *);
	bool requestStartDemoTitleLogo(al::LiveActor const*);
	bool requestStartDemoGoToEnding(al::LiveActor *);
	bool requestStartDemoWorldIntroCamera(al::Scene const*);
	bool requestStartDemoScenarioCamera(al::Scene const*);
	bool requestStartDemoAppearFromHome(al::Scene const*);
	bool requestStartDemoReturnToHome(al::Scene const*);
	bool requestStartDemoRiseMapParts(al::Scene const*);
	bool requestStartDemoPeachCastleCap(al::LiveActor *);
	
	// shit
	
	
}
