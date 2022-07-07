#pragma once

class TimeBalloonStateShowAchievement
{
public:
    TimeBalloonStateShowAchievement(al::ActorInitInfo const&);
    appear();
    exeShow();
    exeClose();
    ~TimeBalloonStateShowAchievement();
};
