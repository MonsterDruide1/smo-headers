#pragma once

class TimeFlagTelop
{
public:
    TimeFlagTelop(al::LayoutInitInfo const&);
    start(char const*, char const*);
    restart();
    close();
    update();
    isEnd() const;
    exeWait();
    exeScroolPrepare();
    exeScrool();
    ~TimeFlagTelop();
};
