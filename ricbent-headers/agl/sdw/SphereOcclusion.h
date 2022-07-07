#pragma once

namespace agl { namespace sdw { namespace SphereOcclusion {

setParam(sead::Vector3<float> const&, float, float);
setDoParam(sead::Vector3<float> const&, float, float);
storeUboStructAo(agl::sdw::SphereAo*, sead::Matrix34<float> const&) const;
storeUboStructDo(agl::sdw::SphereDo*, sead::Matrix34<float> const&) const;
calcDoParamConeDegree(sead::Vector3<float>*, float*, float) const;
calcDoParamSinRad(sead::Vector3<float>*, float*, float) const;

} } } 
