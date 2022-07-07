#pragma once

class StageSceneStateOption
{
public:
    StageSceneStateOption(char const*, al::Scene*, al::LayoutInitInfo const&, FooterParts*, GameDataHolder*, bool);
    updateConfigDataInfo(GameConfigData const*);
    killAllLayouts();
    init();
    appear();
    kill();
    isModeSelectEnd() const;
    getSelectedFileId() const;
    isChangeLanguage() const;
    exeOptionTop();
    decide(al::Nerve const*, SimpleLayoutMenu*, CommonVerticalList*);
    exeModeSelectSelecting();
    openConfirm(al::Nerve const*, SimpleLayoutMenu*, CommonVerticalList*);
    cancel(al::Nerve const*, SimpleLayoutMenu*, CommonVerticalList*);
    exeModeSelectSelectingByHelp();
    exeModeSelectConfirmYesNo();
    exeModeSelectConfirmEnd();
    exeConfig();
    endConfig();
    exeDataManager();
    exeSaveDataSelecting();
    updateSaveDataInfo(bool);
    exeSaveDataConfirmYesNo();
    exeSaveDataSaving();
    exeSaveDataSaved();
    exeLoadDataSelecting();
    exeLoadDataConfirmNg();
    exeLoadDataConfirmYesNo();
    exeLoadDataSaving();
    exeDeleteDataSelecting();
    exeDeleteDataConfirmNg();
    exeDeleteDataConfirmYesNo();
    exeDeleteDataDeleting();
    exeDeleteDataDeleted();
    exeLanguageSetting();
    exeLanguageSettingConfirmYesNo();
    exeWaitEndDecideAnim();
    exeWaitEndDecideAnimAndAutoSave();
    exeWaitEndAutoSave();
    exeClose();
    changeNerve(al::Nerve const*, SimpleLayoutMenu*, CommonVerticalList*);
    ~StageSceneStateOption();
    getMessageSystem() const;
};
