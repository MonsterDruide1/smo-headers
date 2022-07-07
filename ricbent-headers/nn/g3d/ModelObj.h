#pragma once

namespace nn { namespace g3d { namespace ModelObj {

FindMaterial(char const*);
Initialize(nn::g3d::ModelObj::InitializeArgument const&, void*, unsigned long);
ClearBoneVisible();
ClearMaterialVisible();
GetBlockBufferAlignment(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
CalculateBlockBufferSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
SetupBlockBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
CleanupBlockBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
CalculateWorld(nn::util::neon::MatrixRowMajor4x3fType const&);
CalculateBounding(int);
CalculateSkeleton(int);
CalculateView(int, nn::util::neon::MatrixRowMajor4x3fType const&, int);
CalculateShape(int);
CalculateMaterial(int);
UpdateViewDependency();
SetTextureChangeCallback(void (*)(nn::g3d::MaterialObj*, int));

} } } 
