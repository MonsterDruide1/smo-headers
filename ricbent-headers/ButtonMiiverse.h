#pragma once

class ButtonMiiverse
{
public:
    ButtonMiiverse();
    init(al::LayoutInitInfo const&);
    isOn() const;
    setOff();
    validate();
    forceValidate();
    invalidate();
    exeWait();
    exeHoldOn();
    exeHoldOff();
    exeDecide();
    exeOnWait();
    exeDisable();
};
