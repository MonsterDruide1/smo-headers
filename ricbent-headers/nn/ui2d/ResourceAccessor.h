#pragma once

namespace nn { namespace ui2d { 

class ResourceAccessor
{
public:
    FindResourceByName(unsigned long*, unsigned int, char const*) const;
    FindResourceByName(unsigned int, char const*);
    FindResourceByName(unsigned int, char const*) const;
    ~ResourceAccessor();
    ResourceAccessor();
    LoadFont(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    GetRuntimeTypeInfo() const;
    ArchiveShaderPrefix;
    ArchiveShaderSuffix;
};

} } 
