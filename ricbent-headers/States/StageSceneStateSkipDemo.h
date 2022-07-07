#pragma once

class StageSceneStateSkipDemo
{
public:
    StageSceneStateSkipDemo(char const*, al::Scene*, al::WindowConfirm*, al::WipeHolder*, PlayGuideSkip*, SceneAudioSystemPauseController*, al::DemoSyncedEventKeeper*);
    setWorldMapState(StageSceneStateWorldMap*);
    tryAppearSkipDemoLayout();
    isDisableSkipByWorldMap() const;
    tryStartSkipDemo();
    isDemoCancelStageScene() const;
    tryEndForNoSkip();
    isCancelSkip() const;
    isConfirmingOfSkip() const;
    appear();
    kill();
    exeConfirmSkip();
    exeWaitConfirmClose();
    exeSkip();
    exeWaitSkipEnd();
    ~StageSceneStateSkipDemo();
};
