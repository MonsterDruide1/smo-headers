#pragma once

namespace al { 

class LiveActor
{
public:
    getNerveKeeper() const;
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgScreenPoint(al::SensorMsg const*, al::ScreenPointer*, al::ScreenPointTarget*);
    getName() const;
    getEffectKeeper() const;
    getAudioKeeper() const;
    getStageSwitchKeeper() const;
    control();
    LiveActor(char const*);
    initAfterPlacement();
    appear();
    makeActorAlive();
    kill();
    makeActorDead();
    movement();
    calcAnim();
    draw() const;
    startClipped();
    endClipped();
    getBaseMtx() const;
    getRailRider() const;
    getSceneInfo() const;
    getSceneObjHolder() const;
    getCollisionDirector() const;
    getAreaObjDirector() const;
    getCameraDirector() const;
    getNatureDirector() const;
    initPoseKeeper(al::ActorPoseKeeperBase*);
    initExecuteInfo(al::ActorExecuteInfo*);
    initModelKeeper(al::ModelKeeper*);
    initActionKeeper(al::ActorActionKeeper*);
    initNerveKeeper(al::NerveKeeper*);
    initHitSensor(int);
    initScreenPointKeeper(al::ScreenPointKeeper*);
    initEffectKeeper(al::EffectKeeper*);
    initAudioKeeper(al::AudioKeeper*);
    initStageSwitchKeeper();
    initRailKeeper(al::ActorInitInfo const&, char const*);
    initCollider(float, float, unsigned int);
    initItemKeeper(int);
    initScoreKeeper();
    initActorPrePassLightKeeper(al::ActorPrePassLightKeeper*);
    initActorOcclusionKeeper(al::ActorOcclusionKeeper*);
    initSubActorKeeper(al::SubActorKeeper*);
    initSceneInfo(al::ActorSceneInfo*);
    updateCollider();
};

} 
