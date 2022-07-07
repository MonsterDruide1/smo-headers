#pragma once

namespace nn { namespace font { 

class ResFontBase
{
public:
    ResFontBase();
    ~ResFontBase();
    SetResourceBuffer(void*, nn::font::FontInformation*, nn::font::FontKerningTable*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
    RemoveResourceBuffer();
    RegisterTextureViewToDescriptorPool(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    UnregisterTextureViewFromDescriptorPool(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    GetWidth() const;
    GetHeight() const;
    GetAscent() const;
    GetDescent() const;
    GetBaselinePos() const;
    GetCellHeight() const;
    GetCellWidth() const;
    GetMaxCharWidth() const;
    GetType() const;
    GetTextureFormat() const;
    GetLineFeed() const;
    GetDefaultCharWidths() const;
    SetDefaultCharWidths(nn::font::CharWidths const&);
    SetAlternateChar(unsigned int);
    FindGlyphIndex(unsigned int) const;
    SetLineFeed(int);
    GetCharWidth(unsigned int) const;
    GetCharWidths(unsigned int) const;
    GetGlyphIndex(unsigned int) const;
    GetCharWidthsFromIndex(unsigned short) const;
    GetGlyph(nn::font::Glyph*, unsigned int) const;
    GetGlyphFromIndex(nn::font::Glyph*, unsigned short) const;
    HasGlyph(unsigned int) const;
    GetKerning(unsigned int, unsigned int) const;
    CheckCharCodeRange(unsigned int) const;
    GetCharacterCode() const;
    FindGlyphIndex(nn::font::FontCodeMap const*, unsigned int) const;
    GetCharWidthsFromIndex(nn::font::FontWidth const*, unsigned short) const;
    SetGlyphMember(nn::font::Glyph*, unsigned short, nn::font::FontTextureGlyph const&);
    FindBlock(nn::font::detail::BinaryFileHeader*, unsigned int);
    SetLinearFilterEnabled(bool, bool);
    IsLinearFilterEnabledAtSmall() const;
    IsLinearFilterEnabledAtLarge() const;
    GetTextureWrapFilterValue() const;
    IsColorBlackWhiteInterpolationEnabled() const;
    SetColorBlackWhiteInterpolationEnabled(bool);
    IsBorderEffectEnabled() const;
    SetCharCodeRange(int, unsigned int*, unsigned int*);
    GetActiveSheetCount() const;
    GenTextureNames(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    LoadTexture(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::font::ResourceTextureObject*) const;
    DeleteTextureNames(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    UnloadTexture(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::font::ResourceTextureObject*) const;
    GetRuntimeTypeInfo() const;
};

} } 
