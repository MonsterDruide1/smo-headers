#pragma once

namespace al { 

class WipeCloseAppearWaitEnd
{
public:
    WipeCloseAppearWaitEnd(char const*, char const*, al::LayoutInitInfo const&, char const*, bool);
    startClose(int);
    startCloseEnd();
    startOpen(int);
    isCloseEnd() const;
    exeCloseStart();
    exeCloseWait();
    exeCloseEnd();
    exeWait();
    exeOpen();
};

} 
