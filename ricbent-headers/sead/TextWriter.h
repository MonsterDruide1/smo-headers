#pragma once

namespace sead { 

class TextWriter
{
public:
    TextWriter(sead::DrawContext*);
    getDefaultFont();
    TextWriter(sead::DrawContext*, sead::Viewport const*);
    setDefaultFont(sead::FontBase*);
    setupGraphics(sead::DrawContext*);
    getCursorFromTopLeft(sead::Vector2<float>*) const;
    setCursorFromTopLeft(sead::Vector2<float> const&);
    setScaleFromFontSize(sead::Vector2<float> const&);
    setScaleFromFontHeight(float);
    setProjectionAndCamera(sead::Projection const*, sead::Camera const*);
    setLineSpaceFromLineHeight(float);
    setFormatBuffer(char16_t*, int);
    setDrawContext(sead::DrawContext*);
    beginDraw();
    endDraw();
    printf(char16_t const*, ...);
    vprintfImpl_(char16_t const*, std::__va_list, bool, sead::BoundBox2<float>*);
    printfWithCalcRect(sead::BoundBox2<float>*, char16_t const*, ...);
    printf(char const*, ...);
    vprintfImpl_(char const*, std::__va_list, bool, sead::BoundBox2<float>*);
    printfWithCalcRect(sead::BoundBox2<float>*, char const*, ...);
    calcFormatStringRect(sead::BoundBox2<float>*, char16_t const*, ...);
    calcFormatStringRect(sead::BoundBox2<float>*, char const*, ...);
    printImpl_(char16_t const*, int, bool, sead::BoundBox2<float>*, sead::Projection const*, sead::Camera const*);
    printImpl_(char16_t const*, int, bool, sead::BoundBox2<float>*);
    printImpl_(char const*, int, bool, sead::BoundBox2<float>*);
    ~TextWriter();
    sDefaultFont;
};

} 
