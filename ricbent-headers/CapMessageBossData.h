#pragma once

class CapMessageBossData
{
public:
    CapMessageBossData();
    init();
    invalidateMessage(int);
    isValidateMessage(int) const;
    incrementBossBattleCount(int);
    getBattleCount(int) const;
};
