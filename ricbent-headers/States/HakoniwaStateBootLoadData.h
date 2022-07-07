#pragma once

class HakoniwaStateBootLoadData
{
public:
    HakoniwaStateBootLoadData(HakoniwaSequence*, al::GamePadSystem*, al::WipeHolder*, al::ScreenCaptureExecutor*, WorldResourceLoader*, BootLayout*, al::LayoutInitInfo const&, GameDataHolder*, HakoniwaStateDeleteScene*, al::AsyncFunctorThread*);
    ~HakoniwaStateBootLoadData();
    getLanguage() const;
    isChangeLanguage() const;
    isNewGame() const;
    startLoad();
    init();
    appear();
    exeBoot();
    exeBootLayout();
    updatePadSystem();
    exeBootLayoutInitScene();
    exeMenu();
    exeDestroyMenu();
};
