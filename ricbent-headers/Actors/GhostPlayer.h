#pragma once

class GhostPlayer
{
public:
    GhostPlayer(char const*, int, int);
    init(al::ActorInitInfo const&);
    initCommon(al::ActorInitInfo const&);
    initWithArchiveName(al::ActorInitInfo const&, char const*, char const*);
    applyGhostData(int);
    initAfterPlacement();
    initGhostPlayDataFromByaml(al::ByamlIter const*);
    isPlayDone() const;
    initGhostPlayDataFromByaml(char const*);
    initThrowCap(al::LiveActor*);
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    start();
    exeWait();
    showDefault();
    exePlay();
    attachJumpToTarget(sead::Vector3<float> const&);
    exeAttachJump();
    exeEnd();
    exeResult();
};
