#pragma once

class TimeBalloonAchievementLayout
{
public:
    TimeBalloonAchievementLayout(al::LayoutInitInfo const&);
    appear();
    update();
    setAchievement(IBalloonFindMyAchievementHolder const*);
};
