#pragma once

namespace nn { namespace g3d { namespace ResShaderOption {

FindChoiceIndex(char const*) const;
WriteStaticKey(unsigned int*, int) const;
ReadStaticKey(unsigned int const*) const;
WriteDynamicKey(unsigned int*, int) const;
ReadDynamicKey(unsigned int const*) const;

} } } 
