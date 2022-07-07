#pragma once

namespace RankingLocalFunction {

isValidCourceIdYukimaruRace(int);
getRankingCategoryYukimaruRace(int);
isValidWorldIdRaceManRace(int);
getRankingCategoryRaceManRace(int);
isRankingCategoryYukimaruRace(RankingCategory);
isRankingCategoryRaceManRace(RankingCategory);
getRaceManRaceWorldId(RankingCategory);
isRankingCategoryRace(RankingCategory);
tryGetRankingCategoryIndex(int*, RankingCategory, sead::ObjArray<RankingCategory> const&);
isExistRankingCategory(RankingCategory, sead::ObjArray<RankingCategory> const&);
findRankingCategoryByRaceRecordName(char const*);
isRankingUploadableScore(unsigned int, RankingCategory);

} 
