#pragma once

class CandlestandWatcher
{
public:
    CandlestandWatcher(char const*, bool);
    init(al::ActorInitInfo const&);
    copyCandlestandList(sead::PtrArray<Candlestand> const&);
    control();
    tryUpdateHintTrans();
};
