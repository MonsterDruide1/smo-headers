#pragma once

namespace nn { namespace ui2d { 

class PlacementTextureInfo
{
public:
    GetRuntimeTypeInfo() const;
    ~PlacementTextureInfo();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    GetSize() const;
    IsValid() const;
    GetTextureView() const;
    GetTextureView();
};

} } 
