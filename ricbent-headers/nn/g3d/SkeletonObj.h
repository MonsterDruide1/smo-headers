#pragma once

namespace nn { namespace g3d { namespace SkeletonObj {

FindBoneIndex(char const*) const;
CalculateWorldImpl<nn::g3d::CalculateWorldNoScale, false>(nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateWorldImpl<nn::g3d::CalculateWorldStd, false>(nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateWorldImpl<nn::g3d::CalculateWorldMaya, false>(nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateWorldImpl<nn::g3d::CalculateWorldSoftimage, false>(nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateWorldImpl<nn::g3d::CalculateWorldNoScale, true>(nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateWorldImpl<nn::g3d::CalculateWorldStd, true>(nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateWorldImpl<nn::g3d::CalculateWorldMaya, true>(nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateWorldImpl<nn::g3d::CalculateWorldSoftimage, true>(nn::util::neon::MatrixRowMajor4x3fType const&);
Initialize(nn::g3d::SkeletonObj::InitializeArgument const&, void*, unsigned long);
ClearLocalMtx();
GetBlockBufferAlignment(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
CalculateBlockBufferSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
SetupBlockBufferImpl(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
SetupBlockBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
CleanupBlockBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
CalculateBillboardMtx(nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType const&, int, bool) const;
CalculateWorldMtx(nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateSkeleton(int);

} } } 
