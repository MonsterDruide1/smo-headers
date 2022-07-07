#pragma once

namespace nn { namespace ui2d { 

class ResourceTextureInfo
{
public:
    GetRuntimeTypeInfo() const;
    ~ResourceTextureInfo();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    GetSize() const;
    GetFormat() const;
    IsValid() const;
    GetTextureView() const;
    GetTextureView();
};

} } 
