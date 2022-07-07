#pragma once

namespace sead { 

class FrameBufferNvn
{
public:
    ~FrameBufferNvn();
    clear(sead::DrawContext*, unsigned int, sead::Color4f const&, float, unsigned int) const;
    copyToDisplayBuffer(sead::DrawContext*, sead::DisplayBuffer const*) const;
    create(sead::Heap*, sead::Vector2<float> const&, unsigned int, unsigned int);
    bindImpl_(sead::DrawContext*) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
