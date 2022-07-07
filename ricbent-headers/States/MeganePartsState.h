#pragma once

class MeganePartsState
{
public:
    MeganePartsState(al::LiveActor*);
    appear();
    update();
    exeHide();
    exeOn();
    updateAlpha();
    exeShow();
    exeOff();
    ~MeganePartsState();
};
