#pragma once

class TimeBalloonStatePause
{
public:
    TimeBalloonStatePause(al::NerveStateBase*, MiniGameMenu*);
    appear();
    exePause();
    exePauseEnd();
    onPauseTypePut();
    onPauseTypeFind(int, bool);
    isDecideResume() const;
    isDecideRetry() const;
    isDecideExit() const;
    ~TimeBalloonStatePause();
};
