#pragma once

namespace al { namespace JoyPadAccelPoseAnalyzer { 

class PoseAxisDir
{
public:
    PoseAxisDir(int);
    calcHistory(sead::Vector3<float> const&, sead::Vector3<float> const&);
};

} } 
