#pragma once

namespace nn { namespace ui2d { 

class Picture
{
public:
    Picture(int);
    Initialize(int);
    InitializeMaterial(int);
    Picture(nn::ui2d::TextureInfo const&);
    Picture(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::ResPicture const*, nn::ui2d::ResPicture const*, nn::ui2d::BuildArgSet const&);
    InitializeShape(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::ResPicture const*, nn::ui2d::BuildArgSet const&, unsigned int);
    Picture(nn::ui2d::Picture const&, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    ReserveTexCoord(int);
    CopyShapeInfo(nn::ui2d::Picture const&);
    ~Picture();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    GetMaterialCount() const;
    GetMaterial(int) const;
    SetMaterial(nn::ui2d::Material*);
    Append(nn::ui2d::TextureInfo const&);
    SetTexCoordCount(int);
    GetTexCoordCount() const;
    GetTexCoord(nn::util::Float2*, int) const;
    SetTexCoord(int, nn::util::Float2 const*);
    GetVertexColor(int) const;
    SetVertexColor(int, nn::util::Unorm8x4 const&);
    GetVertexColorElement(int) const;
    SetVertexColorElement(int, unsigned char);
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    CopyShapeVertexData(nn::ui2d::DrawInfo&);
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    CompareCopiedInstanceTest(nn::ui2d::Picture const&) const;
    GetRuntimeTypeInfo() const;
};

} } 
