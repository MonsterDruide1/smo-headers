#pragma once

class InformationWindowUpdater
{
public:
    InformationWindowUpdater(InformationWindowRequestHolder*, al::SceneObjHolder*, al::PlayerHolder const*);
    init(al::LayoutInitInfo const&);
    update();
    reset();
    changeSeparatePlay();
    changeSinglePlay();
    updateGyroText();
    exeStop();
    exePrepare();
    exeAppear();
    tryReloadText();
    exeWait();
    tryUpdateCommon();
    exeFadeOut();
    exeFadeIn();
    exeEnd();
    exeHide();
    getMessageSystem() const;
    getNerveKeeper() const;
    getSceneObjHolder() const;
};
