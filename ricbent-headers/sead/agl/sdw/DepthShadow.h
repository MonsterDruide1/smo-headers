#pragma once

namespace sead { namespace agl { namespace sdw { namespace DepthShadow {

checkAndUpdateLightSpaceDirectional_<sead::BoundBox3<float> >(sead::BoundBox3<float> const&, int, sead::BitFlag<unsigned int>);
checkAndUpdateLightSpaceDirectional_<sead::Sphere<sead::Vector3<float> > >(sead::Sphere<sead::Vector3<float> > const&, int, sead::BitFlag<unsigned int>);
checkAndUpdateLightSpace_<sead::BoundBox3<float> >(sead::BoundBox3<float> const&, int, sead::BitFlag<unsigned int>);
checkAndUpdateLightSpace_<sead::Sphere<sead::Vector3<float> > >(sead::Sphere<sead::Vector3<float> > const&, int, sead::BitFlag<unsigned int>);
checkOnly_<sead::BoundBox3<float> >(sead::BoundBox3<float> const&, int, sead::BitFlag<unsigned int>);
checkOnly_<sead::Sphere<sead::Vector3<float> > >(sead::Sphere<sead::Vector3<float> > const&, int, sead::BitFlag<unsigned int>);
noCheck_<sead::BoundBox3<float> >(sead::BoundBox3<float> const&, int, sead::BitFlag<unsigned int>);
noCheck_<sead::Sphere<sead::Vector3<float> > >(sead::Sphere<sead::Vector3<float> > const&, int, sead::BitFlag<unsigned int>);

} } } } 
