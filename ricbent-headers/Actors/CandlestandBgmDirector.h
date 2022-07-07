#pragma once

class CandlestandBgmDirector
{
public:
    CandlestandBgmDirector(char const*, bool);
    init(al::ActorInitInfo const&);
    listenStart();
    listenStop();
    copyCandlestandList(sead::PtrArray<Candlestand> const&);
    movement();
    exeSleep();
    exeWaitActive();
    exeActive();
};
