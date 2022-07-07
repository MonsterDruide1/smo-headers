#pragma once

class TitleMenuScene
{
public:
    TitleMenuScene();
    ~TitleMenuScene();
    init(al::SceneInitInfo const&);
    appear();
    control();
    drawMain() const;
    isEnableKill() const;
    isChangeLanguage() const;
    getLanguage() const;
    isNewGame() const;
    startLoadDirect(bool);
    setScenario();
    setLoadPercent(float);
    isCancelLoadWorldResource() const;
    startLoadWorldResource();
    exeAppear();
    exeMenu();
    exeWipe();
    exeLoadAppear();
    exeLoadWait();
};
