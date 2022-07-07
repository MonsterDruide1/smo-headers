#pragma once

class PlayerHackKeeper
{
public:
    PlayerHackKeeper(al::LiveActor*, HackCap*, PlayerRecoverySafetyPoint*, PlayerInput const*, sead::Matrix34<float> const*, PlayerDamageKeeper const*, IPlayerModelChanger const*, IUsePlayerHeightCheck const*);
    createHackModel(al::ActorInitInfo const&);
    startHack(al::HitSensor*, al::HitSensor*, al::LiveActor*);
    setupHack(al::HitSensor*, al::HitSensor*, al::LiveActor*);
    endHack(HackEndParam const*);
    endHackStartDemo(al::LiveActor*);
    startHackStartDemo(al::LiveActor*);
    startHackStartDemoPuppetable(al::LiveActor*);
    addHackStartDemo(al::LiveActor*);
    appearHackDemoModel(sead::Matrix34<float> const&, float);
    updateHackDemoModel(sead::Matrix34<float> const&, float);
    deleteHackDemoModelEffect();
    killHackDemoModel();
    isActiveHackStartDemo() const;
    recordHack();
    cancelHackArea();
    cancelHack();
    cancelForceRecovery();
    tryEscapeHack();
    sendTransferHack();
    sendMarioCheckpointFlagWarp();
    sendMarioDemo();
    forceKillHack();
    sendMarioDead();
    sendMarioInWater();
    sendMarioDeathArea();
    sendMsgEnableMapCheckPointWarp();
    sendMsgSelfCeilingCheckMiss();
    receiveRequestTransferHack(al::HitSensor*);
    requestDamage();
    receiveRequestDamage();
    sendSyncDamageVisibility();
    pushWorldEndBorder(sead::Vector3<float> const&);
    getCurrentHackName() const;
    getPlayerCollision() const;
    getHackGuideHeight() const;
    isHackGuideEnable() const;
    getHackStayGravityMargine() const;
    getCollisionPartsFilter() const;
    isHackGroupTalkScare() const;
    isHackNoCollisionMsg() const;
    isHackNoSeparateCameraInput() const;
    isHackUsePlayerCollision() const;
    isHackCancelCeilingCheck() const;
    isHackInvalidLifeRecovery() const;
    requestForceHackStageStart(al::HitSensor*, CapTargetInfo const*, al::LiveActor*);
    executeForceHackStageStart(al::HitSensor*, IUsePlayerHack*);
    startDemo();
    endDemo();
};
