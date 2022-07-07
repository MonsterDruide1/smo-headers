#pragma once

namespace sead { 

class FrameBuffer
{
public:
    ~FrameBuffer();
    bind(sead::DrawContext*) const;
    clearMRT(sead::DrawContext*, unsigned int, sead::Color4f const&) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    copyToDisplayBuffer(sead::DrawContext*, sead::DisplayBuffer const*) const;
};

} 
