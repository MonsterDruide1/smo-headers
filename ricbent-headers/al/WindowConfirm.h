#pragma once

namespace al { 

class WindowConfirm
{
public:
    WindowConfirm(al::LayoutInitInfo const&, char const*, char const*);
    setTxtMessage(char16_t const*);
    setTxtList(int, char16_t const*);
    setListNum(int);
    setCancelIdx(int);
    appear();
    appearWithChoicingCancel();
    isNerveEnd();
    tryEnd();
    isEnableInput();
    tryUp();
    tryDown();
    tryDecide();
    tryDecideWithoutEnd();
    tryCancel();
    setCursorToPane();
    tryCancelWithoutEnd();
    exeHide();
    exeAppear();
    exeWait();
    exeDecide();
    exeDecideAfter();
    exeEnd();
};

} 
