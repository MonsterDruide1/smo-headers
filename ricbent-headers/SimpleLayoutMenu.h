#pragma once

class SimpleLayoutMenu
{
public:
    SimpleLayoutMenu(char const*, char const*, al::LayoutInitInfo const&, char const*, bool);
    SimpleLayoutMenu(al::LayoutActor*, char const*, char const*, al::LayoutInitInfo const&, char const*);
    startAppear(char const*);
    startEnd(char const*);
    exeAppear();
    exeWait();
    exeEnd();
    exeEndWait();
    isAppearOrWait() const;
    isWait() const;
    isEndWait() const;
};
