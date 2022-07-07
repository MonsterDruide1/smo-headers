#pragma once

class AchievementInfoReader
{
public:
    AchievementInfoReader();
    init();
    tryFindIndexByName(char const*) const;
};
