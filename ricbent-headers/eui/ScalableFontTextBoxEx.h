#pragma once

namespace eui { 

class ScalableFontTextBoxEx
{
public:
    ScalableFontTextBoxEx(eui::FontMgr*);
    ScalableFontTextBoxEx(nn::ui2d::ResTextBox const*, nn::ui2d::ResTextBox const*, nn::ui2d::BuildArgSet const&, nn::ui2d::TextBox::InitializeStringParam*);
    ScalableFontTextBoxEx(eui::ScalableFontTextBoxEx const&, eui::LayoutEx*);
    registerGlyphsAndGetNext(eui::ScalableFontMgr*);
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    reserveRegisterGlyphs_(eui::ScalableFontMgr*);
    setStringNoPreproces(char16_t const*, unsigned short);
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    doPreprocess_(sead::BufferedSafeStringBase<char16_t>*, unsigned int*, unsigned int*, char16_t const*, unsigned int, int, void*);
    ~ScalableFontTextBoxEx();
    GetRuntimeTypeInfo() const;
    GetRuntimeTypeInfoStatic();
};

} 
