#pragma once

namespace sead { 

class ControllerBase
{
public:
    ControllerBase(int, int, int, int);
    setPointerWithBound_(bool, bool, sead::Vector2<float> const&);
    updateDerivativeParams_(unsigned int, bool);
    getStickHold_(unsigned int, sead::Vector2<float> const&, float, float, int);
    createStickCrossMask_();
    getPadHoldCount(int) const;
    setPadRepeat(unsigned int, unsigned char, unsigned char);
    setLeftStickCrossThreshold(float, float);
    setRightStickCrossThreshold(float, float);
    setPointerBound(sead::BoundBox2<float> const&);
    isIdleBase_();
    setIdleBase_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    cStickHoldThresholdDefault;
    cStickReleaseThresholdDefault;
    cInvalidPointer;
    cInvalidPointerS32;
};

} 
