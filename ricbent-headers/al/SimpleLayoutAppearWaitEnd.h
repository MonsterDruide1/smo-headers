#pragma once

namespace al { 

class SimpleLayoutAppearWaitEnd
{
public:
    SimpleLayoutAppearWaitEnd(char const*, char const*, al::LayoutInitInfo const&, char const*, bool);
    SimpleLayoutAppearWaitEnd(al::LayoutActor*, char const*, char const*, al::LayoutInitInfo const&, char const*);
    appear();
    end();
    startWait();
    exeAppear();
    exeWait();
    exeEnd();
    isWait() const;
    isAppearOrWait() const;
};

} 
