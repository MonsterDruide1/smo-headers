#pragma once

namespace nn { namespace font { 

class Font
{
public:
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    Font();
    ~Font();
    GetCharStrmReader(char) const;
    GetCharStrmReader(unsigned short) const;
    GetRuntimeTypeInfo() const;
};

} } 
