#pragma once

class ShineCounter
{
public:
    ShineCounter(char const*, al::LayoutInitInfo const&);
    kill();
    tryStart();
    tryStartWait();
    tryEnd();
    startCountAnim(bool);
    isEndCountAnim() const;
    exeAppear();
    exeWait();
    exeEnd();
    exeShineCountAppear();
    exeShineCountWait();
    exeShineCountAdd();
};
