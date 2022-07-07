#pragma once

class CursorParts
{
public:
    CursorParts(al::LayoutActor*, al::LayoutInitInfo const&, char const*, char const*);
    appearStart();
    end();
    hide();
    tryAppearIfHide();
    exeAppear();
    exeWait();
    exeEnd();
    exeHide();
};
