#pragma once

namespace nn { namespace font { 

class DispStringBuffer
{
public:
    DispStringBuffer();
    ~DispStringBuffer();
    Initialize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::font::DispStringBuffer::InitializeArg const&);
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    GetRequiredDrawBufferSize(nn::font::DispStringBuffer::InitializeArg const&);
    GetRequiredConstantBufferSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::font::DispStringBuffer::InitializeArg const&);
    SetConstantBuffer(nn::font::GpuBuffer*);
    GetConstantBufferGpuAddress(nn::gfx::GpuAddress*) const;
    BuildConstantBuffer(nn::util::neon::MatrixColumnMajor4x4fType const&, nn::font::ConstantBufferAdditionalContent const*);
    BuildCommonConstantBufferData(nn::font::DispStringBuffer::ShaderParam&, nn::util::neon::MatrixColumnMajor4x4fType const&, nn::font::ConstantBufferAdditionalContent const&) const;
    BuildPerCharacterAttributeConstantBuffer(nn::font::ConstantBufferAdditionalContent const&);
    BuildTextureUseInfos(bool);
    BuildPerCharacterParams(long, nn::font::PerCharacterTransformInfo const*, nn::font::ConstantBufferAdditionalContent::PerCharacterTransformCenter, float, nn::font::ShadowParameter const*);
    CalculatePerCharacterTransform(nn::util::Float4&, nn::util::Float4&, nn::util::Float4&, float, float, float, float, float, float, nn::font::PerCharacterTransformInfo const&, nn::font::ConstantBufferAdditionalContent::PerCharacterTransformCenter, float) const;
    SetFontHeight(float);
    CompareCopiedInstanceTest(nn::font::DispStringBuffer const&) const;
};

} } 
