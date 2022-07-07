#pragma once

namespace al { 

class SeSituationKeeper
{
public:
    SeSituationKeeper(al::SePlayerGroupKeeper*, al::SeCategoryHolder*, al::AudioInfoListWithParts<al::SeSituationInfo> const*);
    startSituation(char const*, int, int, int);
    endSituation(char const*, int);
    update();
    checkIsActiveSituation(char const*) const;
    holdSituation(char const*);
    tryCreateSeSituationKeeper(al::SePlayerGroupKeeper*, al::SeCategoryHolder*, al::AudioInfoListWithParts<al::SeSituationInfo> const*);
};

} 
