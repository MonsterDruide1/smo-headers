#pragma once

class CounterParts
{
public:
    CounterParts(char const*, al::LayoutActor*, al::LayoutInitInfo const&, char const*, int, char const*, char const*, char const*, char const*, char const*, char const*);
    setDigit(int);
    setIconMode();
    isWait() const;
    tryUpdateCount(int);
    setCount(int);
    exeWait();
    exeAdd();
    exeSub();
};
