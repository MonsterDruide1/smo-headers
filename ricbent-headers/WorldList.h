#pragma once

class WorldList
{
public:
    WorldList();
    getWorldNum() const;
    getMainQuestMin(int, int) const;
    getMainStageName(int) const;
    tryFindWorldIndexByMainStageName(char const*) const;
    tryFindWorldIndexByStageName(char const*) const;
    tryFindWorldIndexByDevelopName(char const*) const;
    isEqualClearMainScenarioNo(int, int) const;
    getAfterEndingScenarioNo(int) const;
    isEqualAfterEndingScenarioNo(int, int) const;
    getMoonRockScenarioNo(int) const;
    isEqualMoonRockScenarioNo(int, int) const;
    getWorldDevelopName(int) const;
    getWorldScenarioNum(int) const;
    findUseScenarioNo(char const*) const;
    checkNeedTreasureMessageStage(char const*) const;
    checkIsMainStage(char const*) const;
    tryFindTransOnMainStageByStageName(sead::Vector3<float>*, char const*, int) const;
    tryFindHintTransByScenarioNo(sead::Vector3<float>*, int, int) const;
};
