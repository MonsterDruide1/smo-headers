#pragma once

namespace nn { namespace font { 

class ScalableFont
{
public:
    ScalableFont();
    ~ScalableFont();
    Initialize(nn::font::ScalableFont::InitializeArg const&);
    RegisterAlternateCharGlyph() const;
    GetWidth() const;
    GetHeight() const;
    GetAscent() const;
    GetDescent() const;
    GetMaxCharWidth() const;
    GetType() const;
    GetTextureFormat() const;
    GetLineFeed() const;
    GetDefaultCharWidths() const;
    SetLineFeed(int);
    SetDefaultCharWidths(nn::font::CharWidths const&);
    SetAlternateChar(unsigned int);
    GetCharWidth(unsigned int) const;
    GetCharWidths(unsigned int) const;
    GetGlyph(nn::font::Glyph*, unsigned int) const;
    HasGlyph(unsigned int) const;
    GetKerning(unsigned int, unsigned int) const;
    GetCharacterCode() const;
    GetBaselinePos() const;
    GetCellHeight() const;
    GetCellWidth() const;
    SetLinearFilterEnabled(bool, bool);
    IsLinearFilterEnabledAtSmall() const;
    IsLinearFilterEnabledAtLarge() const;
    GetTextureWrapFilterValue() const;
    IsColorBlackWhiteInterpolationEnabled() const;
    IsBorderEffectEnabled() const;
    SetColorBlackWhiteInterpolationEnabled(bool);
    GetRuntimeTypeInfo() const;
};

} } 
