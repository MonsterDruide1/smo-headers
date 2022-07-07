#pragma once

class TimeBalloonStateWatchFindBalloon
{
public:
    TimeBalloonStateWatchFindBalloon(TimeBalloonDirector*, TimeBalloonNpc*, TimeBalloonBalloon*, TimeBalloonCircle*, TimeBalloonTimer*, TimeBalloonPlayerPlayerHolder*, al::ActorInitInfo const&);
    appear();
    exeReady();
    exePlay();
    exeEnd();
    isPlayEnd();
    ~TimeBalloonStateWatchFindBalloon();
};
