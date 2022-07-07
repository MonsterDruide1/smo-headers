#pragma once

class HardIconParts
{
public:
    HardIconParts(char const*);
    isHide() const;
    isWait() const;
    startHide();
    startAppear();
    startWait();
    startEnd();
    exeHide();
    exeAppear();
    exeWait();
    exePageNext();
    exePageEnd();
    exeEnd();
};
