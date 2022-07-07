#pragma once

class DecideIconLayout
{
public:
    DecideIconLayout(char const*, al::LayoutInitInfo const&);
    appear();
    exeAppear();
    exeWait();
    exeDecide();
    exeEnd();
    isDecide() const;
    isWait() const;
    isEnd() const;
    ~DecideIconLayout();
};
