#pragma once

class ControllerGuideSnapShotCtrl
{
public:
    ControllerGuideSnapShotCtrl(char const*, al::LayoutInitInfo const&, al::PostProcessingFilter*);
    control();
    appearLogo(int);
    start();
    end();
    setFilterName(int);
    exeHide();
    exeShow();
    exeEnd();
    exeEndByButton();
    exeHideByButton();
    exeShowByButton();
    appearLogo(int, bool);
    ~ControllerGuideSnapShotCtrl();
};
