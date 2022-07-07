#pragma once

class WaterfallWorldWaterfall
{
public:
    WaterfallWorldWaterfall(char const*);
    init(al::ActorInitInfo const&);
    changeToMin();
    changeToMax();
    exeWaitMax();
    exeChangeMaxToMin();
    exeWaitMin();
    exeChangeMinToMax();
    getBaseMtx() const;
};
