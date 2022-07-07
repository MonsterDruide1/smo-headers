#pragma once

namespace sead { 

class ReferenceFrameBuffer
{
public:
    ReferenceFrameBuffer(sead::FrameBuffer const*, sead::Vector2<float> const&, sead::BoundBox2<float> const&);
    ReferenceFrameBuffer(sead::FrameBuffer const*, sead::Vector2<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~ReferenceFrameBuffer();
    clear(sead::DrawContext*, unsigned int, sead::Color4f const&, float, unsigned int) const;
    clearMRT(sead::DrawContext*, unsigned int, sead::Color4f const&) const;
    bindImpl_(sead::DrawContext*) const;
};

} 
