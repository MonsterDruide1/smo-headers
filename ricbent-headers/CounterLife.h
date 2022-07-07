#pragma once

class CounterLife
{
public:
    CounterLife(char const*, char const*, al::LayoutInitInfo const&);
    appear();
    kill();
    startGauge(float);
    startGaugeWithFrame(float, float);
    setEmpty();
    setGaugeAnim();
    setCount(float);
    start();
    end();
    wait();
    isWait() const;
    exeNone();
    exeAppear();
    exeWait();
    exeEnd();
    exeGauge();
    exeGaugeWait();
};
