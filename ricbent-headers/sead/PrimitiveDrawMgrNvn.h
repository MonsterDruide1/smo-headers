#pragma once

namespace sead { 

class PrimitiveDrawMgrNvn
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    PrimitiveDrawMgrNvn();
    ~PrimitiveDrawMgrNvn();
    prepareFromBinaryImpl(sead::Heap*, void const*, unsigned int);
    setupNVNBuffer_(NVNbuffer*, NVNmemoryPool*, unsigned long*, unsigned long);
    prepareImpl(sead::Heap*, sead::SafeStringBase<char> const&);
    swapUniformBlockBuffer();
    beginImpl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    endImpl(sead::DrawContext*);
    drawQuadImpl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawImpl_(NVNcommandBuffer*, NVNdrawPrimitive, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&, NVNbuffer*, unsigned int, NVNbuffer*, unsigned int, sead::Texture const*, sead::Vector2<float> const*, sead::Vector2<float> const*);
    drawQuadImpl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Texture const&, sead::Color4f const&, sead::Color4f const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
    drawBoxImpl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawCubeImpl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawWireCubeImpl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawLineImpl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawSphere4x8Impl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawSphere8x16Impl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawDisk16Impl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawDisk32Impl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawCircle16Impl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&);
    drawCircle32Impl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&);
    drawCylinder16Impl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawCylinder32Impl(sead::DrawContext*, sead::Matrix34<float> const&, sead::Color4f const&, sead::Color4f const&);
    sInstance;
};

} 
