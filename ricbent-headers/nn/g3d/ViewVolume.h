#pragma once

namespace nn { namespace g3d { namespace ViewVolume {

SetPerspective(float, float, float, float, nn::util::neon::MatrixRowMajor4x3fType const&);
SetFrustum(float, float, float, float, float, float, nn::util::neon::MatrixRowMajor4x3fType const&);
SetOrtho(float, float, float, float, float, float, nn::util::neon::MatrixRowMajor4x3fType const&);
TestIntersection(nn::g3d::Sphere const&) const;
TestIntersectionEx(nn::g3d::Sphere const&) const;
TestIntersection(nn::g3d::Aabb const&) const;
TestIntersectionEx(nn::g3d::Aabb const&) const;

} } } 
