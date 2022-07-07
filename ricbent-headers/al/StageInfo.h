#pragma once

namespace al { 

class StageInfo
{
public:
    StageInfo(al::Resource*, al::ByamlIter const&, al::ByamlIter const&);
    getPlacementIter() const;
    getZoneIter() const;
};

} 
