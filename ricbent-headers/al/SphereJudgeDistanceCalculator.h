#pragma once

namespace al { 

class SphereJudgeDistanceCalculator
{
public:
    SphereJudgeDistanceCalculator();
    load(al::ByamlIter const&);
    calcJudgeDistance(al::LiveActor const*) const;
    setSphereRadius(float);
    setLocalOffset(sead::Vector3<float> const&);
};

} 
