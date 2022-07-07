#pragma once

class BalloonEmote
{
public:
    BalloonEmote(char const*, al::LayoutInitInfo const&, sead::Matrix34<float> const*, sead::Vector3<float> const&, char const*);
    startUpdateDraw();
    hideAndStopUpdate();
    exeSleep();
    exeShowAppear();
    updateTransAndCheckShow();
    exeShowWait();
    exeHide();
    exeEnd();
};
