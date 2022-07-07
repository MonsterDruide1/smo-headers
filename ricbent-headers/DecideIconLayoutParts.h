#pragma once

class DecideIconLayoutParts
{
public:
    DecideIconLayoutParts(char const*, al::LayoutActor*, al::LayoutInitInfo const&);
    start();
    exeAppear();
    exeWait();
    exeDecide();
    exeDecideAfter();
    exeEnd();
    isDecide() const;
    isWait() const;
    isEnd() const;
};
