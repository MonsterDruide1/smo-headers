#pragma once

namespace nn { namespace g3d { namespace Aabb {

Set(nn::util::neon::Vector3fType const*, int);
Transform(nn::g3d::Bounding const&, nn::util::neon::MatrixRowMajor4x3fType const&);
Merge(nn::g3d::Aabb const&, nn::g3d::Aabb const&);

} } } 
