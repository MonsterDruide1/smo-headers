#pragma once

namespace al { 

class SimpleLayoutAppearWait
{
public:
    SimpleLayoutAppearWait(char const*, char const*, al::LayoutInitInfo const&, char const*);
    SimpleLayoutAppearWait(al::LayoutActor*, char const*, char const*, al::LayoutInitInfo const&, char const*);
    appear();
    isWait() const;
    exeAppear();
    exeWait();
};

} 
