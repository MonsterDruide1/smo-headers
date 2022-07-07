#pragma once

namespace al { namespace JoyPadAccelPoseAnalyzer { 

class HistoryInfo
{
public:
    HistoryInfo(int);
    calcHistory(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
};

} } 
