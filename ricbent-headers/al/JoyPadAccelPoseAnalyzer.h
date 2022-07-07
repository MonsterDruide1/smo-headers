#pragma once

namespace al { 

class JoyPadAccelPoseAnalyzer
{
public:
    JoyPadAccelPoseAnalyzer();
    update();
    setSwingBorder(float, float);
    isSwingLeftHand() const;
    isSwingRightHand() const;
    isSwingAnyHand() const;
    isSwingDoubleHand() const;
    isSwingDoubleHandSameDir() const;
    isSwingDoubleHandReverseDir() const;
    isSwingDoubleHandReverseInsideDir() const;
    isSwingDoubleHandReverseOutsideDir() const;
    getSwingDirDoubleHandSameDir() const;
};

} 
