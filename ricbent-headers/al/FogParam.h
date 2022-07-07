#pragma once

namespace al { 

class FogParam
{
public:
    isEnable() const;
    isApplySky() const;
    isApplySkyDefault() const;
    isDeferredFog() const;
    isBlendMult() const;
    isInWater() const;
    isUseDepthTgt() const;
    getColor() const;
    getStart() const;
    getSlope() const;
    getMax() const;
    getSkyMip() const;
    getNoiseIntensity() const;
    getNoiseDistCoef() const;
    getNoiseTexCrdScale() const;
    getNoiseTexCrdVelocity() const;
    setEnable(bool);
    setApplySky(bool);
    setApplySkyDefault(bool);
    setBlendMult(bool);
    setIsInWater(bool);
    setColor(sead::Color4f const&);
    setStart(float);
    setSlope(float);
    setMax(float);
    setSkyMip(float);
    setNoiseIntensity(float);
    setNoiseDistCoef(float);
    setNoiseTexCrdScale(float);
    setNoiseTexCrdVelocity(sead::Vector3<float> const&);
    FogParam();
    getParamName() const;
    getParamObj();
    getParamObj() const;
};

} 
