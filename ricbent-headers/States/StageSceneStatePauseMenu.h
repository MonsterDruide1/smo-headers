#pragma once

class StageSceneStatePauseMenu
{
public:
    StageSceneStatePauseMenu(char const*, al::Scene*, al::SimpleLayoutAppearWaitEnd*, GameDataHolder*, al::SceneInitInfo const&, al::ActorInitInfo const&, al::LayoutInitInfo const&, al::WindowConfirm*, StageSceneLayout*, bool, SceneAudioSystemPauseController*);
    appear();
    kill();
    killPauseMenu();
    killMarioModel();
    isNeedKillHost() const;
    startNormal();
    startAfterTitle();
    killAllOptionLayout();
    isEndToCancel() const;
    isEndToHelp() const;
    isLoadData() const;
    getSelectedFileId() const;
    isChangeLanguage() const;
    getLanguage() const;
    isNewGame() const;
    isModeSelectEnd() const;
    checkNeedKillByHostAndEnd();
    startActionMario(char const*);
    getMarioActor() const;
    isDrawLayout() const;
    isDrawLayoutMain() const;
    isDrawViewRenderer() const;
    isDrawChromakey() const;
    exeAppear();
    setNormal();
    appearMarioModel();
    updatePlayerPose();
    exeWait();
    changeNerveAndReturn(al::Nerve const*);
    exeFadeBeforeHelp();
    exeStartHelp();
    exeWaitDraw();
    exeEnd();
    exeStartSeparatePlay();
    exeEndSeparatePlay();
    exeOption();
    exeSave();
    exeConfirmNewGame();
    exeNotExistEmptyFile();
    startPauseCamera();
    setAfterTitle();
    ~StageSceneStatePauseMenu();
};
