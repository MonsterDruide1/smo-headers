#pragma once

namespace al { 

class BoundingBoxJudgeDistanceCalculator
{
public:
    BoundingBoxJudgeDistanceCalculator();
    BoundingBoxJudgeDistanceCalculator(sead::Vector3<float> const&, sead::Vector3<float> const&);
    load(al::ByamlIter const&);
    calcJudgeDistance(al::LiveActor const*) const;
    makeBox(sead::BoundBox3<float>*) const;
    setLocalOffset(sead::Vector3<float> const&);
};

} 
