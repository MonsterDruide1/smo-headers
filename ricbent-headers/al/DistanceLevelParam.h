#pragma once

namespace al { 

class DistanceLevelParam
{
public:
    DistanceLevelParam(int);
    calcLevel(float) const;
    getDistance(int) const;
    update(float);
    setDistance(int, float);
    setParam(al::ByamlIter const&);
};

} 
