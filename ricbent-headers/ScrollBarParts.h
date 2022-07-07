#pragma once

class ScrollBarParts
{
public:
    ScrollBarParts(al::LayoutActor*, al::LayoutInitInfo const&, bool);
    control();
    setupDataNum(int, int);
    updateIdx(int);
    exeAppear();
    updatePos();
    exeWait();
    exeEnd();
    exeHide();
    exeInvalid();
};
