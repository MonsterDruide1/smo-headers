#pragma once

class BalloonIcon
{
public:
    BalloonIcon(char const*, al::LayoutInitInfo const&, sead::Matrix34<float> const*, sead::Vector3<float> const&, char const*, bool, bool, bool);
    onSnapShotMode();
    offSnapShotMode();
    startUpdateDraw();
    hideAndStopUpdate();
    exeSleep();
    exeHide();
    updateTransAndCheckShow();
    exeShowAppear();
    exeShowWait();
    exeShowEnd();
    exeEnd();
};
