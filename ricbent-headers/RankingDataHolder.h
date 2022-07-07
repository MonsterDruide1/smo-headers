#pragma once

class RankingDataHolder
{
public:
    RankingDataHolder(sead::ObjArray<RankingCategory> const&, int);
    clear(RankingType, RankingCategory);
    findCategoryData(RankingType, RankingCategory) const;
    clearAll();
    setRankingData(RankingType, RankingCategory, int, unsigned long, unsigned int, unsigned int, char16_t const*);
};
