#pragma once

namespace nn { namespace ui2d { 

class Material
{
public:
    SetColorElement(int, int);
    Material();
    Initialize();
    Material(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::ResMaterial const*, nn::ui2d::ResMaterial const*, nn::ui2d::BuildArgSet const&);
    ReserveMem(int, int, int, int, bool, int, bool, int, bool, bool);
    SetupShader(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::BuildArgSet const&, nn::ui2d::BuildResSet const*);
    CollectConstantBufferSize(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
    InitializeBlendInformation(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    SetupUserShaderConstantBufferInformation(nn::ui2d::UserShaderInformation const&);
    GetShaderForDetailedCombiner(int*, int*) const;
    GetShaderBlend(int*, int*) const;
    CopyUserShaderConstantBufferInformation(nn::ui2d::Material const&);
    GetVertexShaderConstantBufferSize() const;
    GetPixelShaderConstantBufferSize() const;
    GetPixelShaderDetailedCombinerConstantBufferSize() const;
    GetGeometryShaderConstantBufferSize() const;
    GetBlendStateId() const;
    SetupBlendState(nn::ui2d::DrawInfo const*);
    Material(nn::ui2d::Material const&, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    InitializeMatMemCount(nn::ui2d::detail::MatMemCount*) const;
    ~Material();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    CalculateReserveMemSize(int, int, int, int, int, int, int, int, int, int);
    BindAnimation(nn::ui2d::AnimTransform*);
    UnbindAnimation(nn::ui2d::AnimTransform*);
    GetProjectionTexGenParametersIdxFromTexCoordGenIdx(int) const;
    CalculateTextureMtx(float (*) [3], nn::ui2d::ResTexSrt const&, nn::ui2d::TexMap const&);
    CalculateIndirectMtx(float (*) [3], float, nn::ui2d::ResVec2 const&);
    SetupGraphics(nn::ui2d::DrawInfo&, unsigned char, nn::ui2d::ShaderVariation, bool, nn::util::neon::MatrixColumnMajor4x3fType const&, nn::ui2d::Size const*);
    GetConstantBufferForVertexShader(nn::ui2d::DrawInfo const&) const;
    SetupSubmaterialOf_TextureMatrix(nn::ui2d::DrawInfo&, nn::util::neon::MatrixColumnMajor4x3fType const&, nn::ui2d::Size const*);
    SetRcpTexSize(nn::ui2d::DrawInfo const&) const;
    SetupSubmaterialOf_Tev(nn::ui2d::DrawInfo&) const;
    SetupSubmaterialOf_TextureProjectionMatrix(nn::ui2d::DrawInfo&, nn::util::neon::MatrixColumnMajor4x3fType const&, nn::ui2d::Size const*, nn::ui2d::ResProjectionTexGenParameters const&, int) const;
    SetupSubmaterialOf_Texture(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&) const;
    GetConstantBufferForPixelShader(nn::ui2d::DrawInfo const&) const;
    GetConstantBufferForDetailedCombinerPixelShader(nn::ui2d::DrawInfo const&) const;
    AllocateConstantBuffer(nn::ui2d::DrawInfo&);
    GetConstantBufferForUserVertexShader(nn::ui2d::DrawInfo const&) const;
    GetConstantBufferForUserPixelShader(nn::ui2d::DrawInfo const&) const;
    GetConstantBufferForUserGeometryShader(nn::ui2d::DrawInfo const&) const;
    SetCommandBuffer(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&, nn::ui2d::DrawInfo&) const;
    EnableAlphaTest(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&) const;
    DisableAlphaTest() const;
    ApplyVertexShaderConstantBuffer(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&, nn::ui2d::DrawInfo&) const;
    ApplyGeometryShaderConstantBuffer(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&, nn::ui2d::DrawInfo&) const;
    ApplyPixelShaderConstantBuffer(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&, nn::ui2d::DrawInfo&) const;
    ApplyPixelShaderDetailedCombinerConstantBuffer(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&, nn::ui2d::DrawInfo&) const;
    SetCommandBufferOnlyBlend(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&) const;
    SetShader(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&) const;
    CompareCopiedInstanceTest(nn::ui2d::Material const&) const;
};

} } 
