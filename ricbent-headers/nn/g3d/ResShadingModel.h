#pragma once

namespace nn { namespace g3d { namespace ResShadingModel {

FindStaticOption(char const*);
UpdateProgram(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int);
Relocate();
Unrelocate();
IsBinaryAvailable(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
Setup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::os::MutexType*);
Setup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long, nn::os::MutexType*);
Cleanup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
WriteDefaultStaticKey(unsigned int*) const;
GetStaticKey(int) const;
WriteDefaultDynamicKey(unsigned int*) const;
GetDynamicKey(int) const;
WriteInvalidDynamicKey(unsigned int*) const;
FindProgramIndex(unsigned int const*) const;
FindProgramIndex(nn::g3d::ShaderRange const&, unsigned int const*) const;
FindProgramRange(nn::g3d::ShaderRange*, unsigned int const*) const;
GetKey(int) const;
PrintKeyTo(char*, unsigned long, unsigned int const*, int);
PrintStaticOptionTo(char*, unsigned long, unsigned int const*) const;
PrintDynamicOptionTo(char*, unsigned long, unsigned int const*) const;

} } } 
