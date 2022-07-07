#pragma once

namespace nn { namespace font { 

class CharWriter
{
public:
    CharWriter();
    ~CharWriter();
    SetFontSize(float, float);
    SetFontSize(float);
    GetFontWidth() const;
    GetFontHeight() const;
    GetFontAscent() const;
    GetFontDescent() const;
    PrintGlyph(nn::font::Glyph const&);
    PrintGlyph(float, nn::font::Glyph const&);
    Print(unsigned int);
    DrawGlyph(nn::font::Glyph const&);
    StartPrint();
    EndPrint() const;
    GetDispStringBufferSize(unsigned int);
    GetConstantBufferSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int, bool);
    InitializeDispStringBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void*, unsigned int, bool);
};

} } 
