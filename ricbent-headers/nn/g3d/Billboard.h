#pragma once

namespace nn { namespace g3d { namespace Billboard {

CalculateWorld(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateWorldViewpoint(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateYAxis(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateYAxisViewpoint(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateScreen(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateScreenViewpoint(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);
Calculate(unsigned int, nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateWorld(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateWorldViewpoint(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateScreen(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateYAxis(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateYAxisViewpoint(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&, nn::util::neon::MatrixRowMajor4x3fType const&);

} } } 
