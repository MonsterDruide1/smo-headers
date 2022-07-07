#pragma once

class TimeBalloonTimer
{
public:
    TimeBalloonTimer(al::ActorInitInfo const&, al::SimpleLayoutAppearWaitEnd*, char const*);
    reset();
    update();
    updateCountLayout();
    display();
    isEnd() const;
    isEndWithZero() const;
    isGreaterEqualRemainTimeSec(int) const;
};
