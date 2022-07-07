#pragma once

class SouvenirListLayout
{
public:
    SouvenirListLayout(al::LayoutInitInfo const&);
    updatePartsData();
    loadTexture();
    appear();
    control();
    isClosing() const;
    isEnableInput() const;
    calcCursorPos(sead::Vector2<float>*) const;
    exeAppear();
    exeWait();
    exeEnd();
    exeChangeOut();
    exeChangeIn();
    deactivate();
    exeDeactive();
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
