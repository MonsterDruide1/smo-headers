#pragma once

class GaugeAir
{
public:
    GaugeAir(char const*, al::LayoutInitInfo const&);
    isWait() const;
    start();
    updateStateAnim();
    endMax();
    fastEnd();
    setRate(float);
    exeAppear();
    exeWait();
    exeEnd();
    exeFastEnd();
};
