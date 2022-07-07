#pragma once

namespace al { 

class JudgeDistanceCalculatorHolder
{
public:
    JudgeDistanceCalculatorHolder(al::LiveActor const*);
    initSphere(float);
    initBoundingBox(sead::Vector3<float> const&, sead::Vector3<float> const&);
    initName(char const*);
    load(al::ByamlIter const&);
    isEqualName(char const*) const;
};

} 
