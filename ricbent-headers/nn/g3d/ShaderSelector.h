#pragma once

namespace nn { namespace g3d { namespace ShaderSelector {

Initialize(nn::g3d::ShaderSelector::InitializeArgument const&, void*, unsigned long);
UpdateVariation(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
ClearDynamicKey();
WriteDynamicKey(int, int);
ReadDynamicKey(int) const;
PrintRawKeyTo(char*, int) const;
PrintKeyTo(char*, int) const;
PrintRawOptionTo(char*, int) const;
PrintOptionTo(char*, int) const;

} } } 
