#pragma once

namespace al { 

class SimplePopupMessageLayout
{
public:
    SimplePopupMessageLayout(char const*, char const*, al::LayoutInitInfo const&, char const*, bool);
    appear();
    end();
    startWait();
    exeAppear();
    refreshPos();
    exeWait();
    exeEnd();
    isWait() const;
    isAppearOrWait() const;
};

} 
