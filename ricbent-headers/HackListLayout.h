#pragma once

class HackListLayout
{
public:
    HackListLayout(al::LayoutInitInfo const&);
    loadTexture();
    updateHackPartsData();
    appear();
    control();
    isClosing() const;
    isEnableInput() const;
    calcCursorPos(sead::Vector2<float>*) const;
    isDeactive() const;
    exeAppear();
    exeWait();
    exeEnd();
    exeDeactive();
    exeChangeOut();
    exeChangeIn();
    deactivate();
    right();
    left();
    rightTrigger();
    leftTrigger();
    pageUp();
    pageDown();
    cancel();
    changeOut(bool);
    changeIn(bool);
    activate();
};
