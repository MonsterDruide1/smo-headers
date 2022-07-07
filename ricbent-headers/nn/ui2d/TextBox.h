#pragma once

namespace nn { namespace ui2d { 

class TextBox
{
public:
    TextBox();
    Initialize();
    InitializeMaterial();
    TextBox(bool);
    TextBox(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::TextBox::InitializeStringParam*, nn::ui2d::ResTextBox const*, nn::ui2d::ResTextBox const*, nn::ui2d::BuildArgSet const&);
    InitializePerCharacterTransformCurves(nn::ui2d::ResAnimationInfo const*);
    InitializeString(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::BuildArgSet const&, nn::ui2d::TextBox::InitializeStringParam const&);
    InitializeStringWithTextSearcherInfo(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::BuildArgSet const&, nn::ui2d::TextSearcher::TextInfo const&);
    InitializeStringWithTextSearcherInfoUtf8(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::BuildArgSet const&, nn::ui2d::TextSearcher::TextInfoUtf8 const&);
    CopyLineWidthOffset(nn::ui2d::TextBox const&);
    CopyPerCharacterTransform(nn::ui2d::TextBox const&);
    TextBox(nn::ui2d::TextBox const&, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    GetStringBufferLength() const;
    GetDrawStringBufferLength() const;
    TextBox(nn::ui2d::TextBox const&, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned short);
    ~TextBox();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    GetMaterialCount() const;
    GetMaterial(int) const;
    SetMaterial(nn::ui2d::Material*);
    UnsetMaterial();
    GetAngleFromItalicRatio() const;
    SetAngleToItalicRatio(float);
    GetAngleFromShadowItalicRatio() const;
    SetAngleToShadowItalicRatio(float);
    GetVertexColor(int) const;
    SetVertexColor(int, nn::util::Unorm8x4 const&);
    GetVertexColorElement(int) const;
    SetVertexColorElement(int, unsigned char);
    GetTextDrawRect() const;
    SetFontInfoUtf8(nn::font::TextWriterBase<char>*) const;
    SetFontInfo(nn::font::TextWriterBase<unsigned short>*) const;
    AdjustTextPos(nn::ui2d::Size const&, bool) const;
    SetupConstantBufferAdditionalContent(nn::font::ConstantBufferAdditionalContent&) const;
    BuildConstantBuffer(nn::ui2d::DrawInfo&) const;
    GetTextGlobalMtx(nn::util::neon::MatrixColumnMajor4x3fType*) const;
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    UpdatePerCharacterTransform();
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    CompareCopiedInstanceTest(nn::ui2d::TextBox const&) const;
    AllocateStringBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned short);
    AllocateStringBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned short, unsigned short);
    FreeStringBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    SetString(unsigned short const*, unsigned short);
    SetStringImpl(unsigned short const*, unsigned short, int);
    SetStringUtf8(char const*, unsigned short);
    SetStringImplUtf8(char const*, unsigned short, int);
    SetString(unsigned short const*, unsigned short, unsigned short);
    SetStringUtf8(char const*, unsigned short, unsigned short);
    GetFont() const;
    SetFont(nn::font::Font const*);
    SetFontSize(nn::ui2d::Size const&);
    LoadMtx(nn::ui2d::DrawInfo&);
    SetTextPos(nn::font::TextWriterBase<unsigned short>*) const;
    SetTextPosUtf8(nn::font::TextWriterBase<char>*) const;
    SetupTextWriter(nn::font::TextWriterBase<unsigned short>*);
    SetupTextWriterUtf8(nn::font::TextWriterBase<char>*);
    SetPerCharacterTransform(int, float);
    GetRuntimeTypeInfo() const;
};

} } 
