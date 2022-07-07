#pragma once

class AchievementHolder
{
public:
    AchievementHolder();
    init(al::ActorInitInfo const&);
    init();
    isGetMoon(int, GameDataHolderAccessor) const;
    isAchieve(int, GameDataHolderAccessor) const;
    getAchievementProgressCurrent(int, GameDataHolderAccessor) const;
    getAchievementProgressMax(int, GameDataHolderAccessor) const;
    getAchievementProgressCurrentRow(int, GameDataHolderAccessor) const;
    calcAchieveTotalNum(GameDataHolderAccessor) const;
    calcMoonGetTotalNum(GameDataHolderAccessor) const;
    tryGetNewAchievement(GameDataHolderAccessor) const;
};
