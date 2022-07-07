#pragma once

namespace al { 

class FluidSurfaceHolder
{
public:
    FluidSurfaceHolder();
    registerFluidSurface(al::IUseFluidSurface*);
    setWaterRippleFieldScale(float);
    calcIsInFluid(sead::Vector3<float> const&, char const*);
    tryFindFluidSurface(sead::Vector3<float> const&, char const*);
    tryCalcFluidPos(sead::Vector3<float>*, sead::Vector3<float> const&, char const*);
    tryCalcFluidPosFlat(sead::Vector3<float>*, sead::Vector3<float> const&, char const*);
    tryCalcFluidDisplacement(sead::Vector3<float>*, sead::Vector3<float> const&, char const*);
    tryCalcFluidNormal(sead::Vector3<float>*, sead::Vector3<float> const&, char const*);
    tryAddRipple(sead::Vector3<float> const&, float, float, char const*);
    tryAddRippleAll(sead::Vector3<float> const&, float, float);
    tryAddRippleAllWithRange(sead::Vector3<float> const&, float, float, float, float);
    tryAddQuadRippleAll(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
};

} 
