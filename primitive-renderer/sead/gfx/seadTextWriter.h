#pragma once

#include <gfx/seadColor.h>
#include <math/seadBoundBox.h>

namespace sead
{
class Viewport;
class Camera;
class Projection;
class DrawContext;

class TextWriter
{
public:
    virtual ~TextWriter();
    
    TextWriter(sead::DrawContext *);
    TextWriter(sead::DrawContext *, sead::Viewport const *);

    void printImpl_(char const*, int, bool, sead::BoundBox2<float>*);
    void printf(char const*, ...);
    void printf(char16_t const*, ...);
    void setScaleFromFontHeight(float);
    void setCursorFromTopLeft(sead::Vector2<f32> const &);
    void beginDraw();
    void endDraw();
    sead::DebugFontMgrNvn *getDefaultFont();
    static void setDefaultFont(sead::FontBase *);
    static void setupGraphics(sead::DrawContext*);

    Viewport* mViewport;
    Projection* mProjection;
    Camera* mCamera;
    int _20;
    int _24;
    int _28;
    int _2c;
    Vector2f mScale;
    Color4f mColor;
    int _48;
    float mLineSpace;
    BoundBox2f mBoundBox2;
    int TextWriter_x58;
    int TextWriter_x5C;
    char16_t* mFormatBuffer;
    int mFormatBufferSize;
    int _6c;
    DrawContext* mDrawContext;
};
}  // namespace sead
