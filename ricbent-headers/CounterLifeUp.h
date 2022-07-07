#pragma once

class CounterLifeUp
{
public:
    CounterLifeUp(char const*, al::LayoutActor*, al::LayoutInitInfo const&, char const*, int, char const*, char const*, char const*, char const*, char const*, char const*);
    appear();
    setDigit(int);
    setIconMode();
    isWait() const;
    isBreak() const;
    tryUpdateCount(int, bool);
    startBreak();
    setCount(int);
    exeWait();
    exeAdd();
    exeSub();
    exeBreak();
};
