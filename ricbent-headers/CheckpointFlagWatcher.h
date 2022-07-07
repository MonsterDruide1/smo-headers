#pragma once

class CheckpointFlagWatcher
{
public:
    CheckpointFlagWatcher(al::CameraDirector*);
    initStageInfo(char const*, int);
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    execute();
    registerCheckpointFlag(CheckpointFlag*);
    setTouchCheckpointFlag(CheckpointFlag*);
    setTouchAfterCheckpointFlag(char const*);
    findCheckpointFlag(char const*) const;
    tryFindCheckpointFlag(char const*) const;
    tryFindCheckpointFlagTrans(sead::Vector3<float>*, char const*) const;
    requestShowNameLayout(char16_t const*);
    requestCancelNameLayoutByShineGetDemo();
    requestShowBalloon(CheckpointFlag const*, sead::Vector3<float> const&);
    requestHideBalloon(CheckpointFlag const*);
    hideBalloonAllAtBossSequence(al::LiveActor const*);
    showBalloonAllAfterBossSequence(al::LiveActor const*);
    getSceneObjName() const;
    ~CheckpointFlagWatcher();
    getCameraDirector() const;
};
