#pragma once

namespace nn { namespace g3d { namespace ShadingModelObj {

FindStaticOptionIndex(char const*) const;
Initialize(nn::g3d::ShadingModelObj::InitializeArgument const&, void*, unsigned long);
GetBlockBufferAlignment(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
CalculateBlockBufferSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
SetupBlockBufferImpl(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
SetupBlockBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
CleanupBlockBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
CalculateOptionBlock(int);
ClearStaticKey();
WriteStaticKey(int, int);
ReadStaticKey(int) const;
PrintRawKeyTo(char*, int) const;
PrintKeyTo(char*, int) const;
PrintRawOptionTo(char*, int) const;
PrintOptionTo(char*, int) const;

} } } 
