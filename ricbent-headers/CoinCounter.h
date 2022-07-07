#pragma once

class CoinCounter
{
public:
    CoinCounter(char const*, al::LayoutInitInfo const&, bool);
    kill();
    isWait() const;
    tryStart();
    updateCountImmidiate();
    tryEnd();
    startCountAnim(int);
    getCountTotalFromData() const;
    exeAppear();
    exeWait();
    tryUpdateCount();
    exeEnd();
    exeAdd();
    exeSub();
    exeCountAnimAdd();
    exeCountAnimSub();
    getCountFromData() const;
};
