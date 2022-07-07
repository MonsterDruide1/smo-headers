#pragma once

namespace al { 

class ActorScoreKeeper
{
public:
    ActorScoreKeeper();
    init(al::ByamlIter const&);
    getCategoryName() const;
    tryGetCategoryName(char const*) const;
};

} 
