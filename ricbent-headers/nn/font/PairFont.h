#pragma once

namespace nn { namespace font { 

class PairFont
{
public:
    PairFont();
    PairFont(nn::font::Font*, nn::font::Font*);
    SetFont(nn::font::Font*, nn::font::Font*);
    ~PairFont();
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
    SetLineFeed(int);
    GetCharWidth(unsigned int) const;
    GetCharWidths(unsigned int) const;
    GetGlyph(nn::font::Glyph*, unsigned int) const;
    HasGlyph(unsigned int) const;
    GetKerning(unsigned int, unsigned int) const;
    GetCharacterCode() const;
    SetLinearFilterEnabled(bool, bool);
    IsLinearFilterEnabledAtSmall() const;
    IsLinearFilterEnabledAtLarge() const;
    GetTextureWrapFilterValue() const;
    IsColorBlackWhiteInterpolationEnabled() const;
    SetColorBlackWhiteInterpolationEnabled(bool);
    IsBorderEffectEnabled() const;
    GetRuntimeTypeInfo() const;
};

} } 
