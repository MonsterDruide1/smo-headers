#pragma once

class AchievementSaveData
{
public:
    AchievementSaveData(AchievementInfoReader const*);
    init();
    getAchievement(char const*);
    findAchievementIndex(char const*) const;
    checkGetAchievement(char const*) const;
    checkGetAchievement(int) const;
    findAchievementGetTime(int) const;
    calcGetAchievementNum() const;
    getAchievementNum() const;
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
