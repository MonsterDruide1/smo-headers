#pragma once

namespace al { 

class WindowConfirmWait
{
public:
    WindowConfirmWait(char const*, char const*, al::LayoutInitInfo const&);
    setTxtMessage(char16_t const*);
    setTxtMessageConfirm(char16_t const*);
    appear();
    tryEnd();
    tryEndForce();
    playLoop();
    endLoop();
    tryPageIn();
    tryPageOut();
    showPaneConfirm();
    tryConfirmDecide();
    updateHardKey();
    exeHide();
    exeAppear();
    exeKeepWait();
    exeWait();
    exeWaitEnd();
    exeEnd();
    exePageIn();
    exePageOut();
    exePageOutEnd();
    exeConfirmDecide();
};

} 
