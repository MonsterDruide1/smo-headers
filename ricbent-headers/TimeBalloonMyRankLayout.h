#pragma once

class TimeBalloonMyRankLayout
{
public:
    TimeBalloonMyRankLayout(al::LayoutInitInfo const&);
    update(TimeBalloon::AchievementData const*);
};
