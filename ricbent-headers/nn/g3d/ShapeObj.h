#pragma once

namespace nn { namespace g3d { namespace ShapeObj {

Initialize(nn::g3d::ShapeObj::InitializeArgument const&, void*, unsigned long);
ClearBlendWeights();
GetBlockBufferAlignment(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
CalculateBlockBufferSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
SetupBlockBufferImpl(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
SetupBlockBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
CleanupBlockBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
CalculateBounding(nn::g3d::SkeletonObj const*, int);
CalculateSubMeshBounding(nn::g3d::SkeletonObj const*, int);
CalculateShape(int, nn::util::neon::MatrixRowMajor4x3fType const&, int);
TestSubMeshIntersection(nn::g3d::CullingContext*, nn::g3d::ViewVolume const&, int) const;
TestSubMeshLodIntersection(nn::g3d::CullingContext*, nn::g3d::ViewVolume const&, nn::g3d::ICalculateLodLevelFunctor&) const;
MakeSubMeshRange(nn::g3d::SubMeshRange*, nn::g3d::ViewVolume const&, int) const;
MakeSubMeshLodRange(nn::g3d::SubMeshRange*, nn::g3d::ViewVolume const&, nn::g3d::ICalculateLodLevelFunctor&) const;

} } } 
