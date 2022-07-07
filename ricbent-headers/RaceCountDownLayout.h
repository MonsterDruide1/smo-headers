#pragma once

class RaceCountDownLayout
{
public:
    RaceCountDownLayout(al::LayoutInitInfo const&);
    startCountDown(int);
    startFinish();
    isEndCountDown() const;
    isEndFinish() const;
    reset();
    exeWait();
    exeCountDown();
    exeCountDownEnd();
    exeFinish();
    exeFinishEnd();
};
