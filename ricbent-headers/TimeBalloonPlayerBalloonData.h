#pragma once

class TimeBalloonPlayerBalloonData
{
public:
    TimeBalloonPlayerBalloonData(al::LiveActor*);
    getBalloonStateNum() const;
    readBalloonState();
    getBalloonState(int) const;
};
