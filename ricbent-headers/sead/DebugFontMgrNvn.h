#pragma once

namespace sead { 

class DebugFontMgrNvn
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    DebugFontMgrNvn();
    ~DebugFontMgrNvn();
    initialize(sead::Heap*, char const*, char const*, unsigned int);
    initializeFromBinary(sead::Heap*, void*, unsigned long, void*, unsigned long, unsigned int);
    swapUniformBlockBuffer();
    getHeight() const;
    getWidth() const;
    getCharWidth(char16_t) const;
    getMaxDrawNum() const;
    begin(sead::DrawContext*) const;
    end(sead::DrawContext*) const;
    print(sead::DrawContext*, sead::Projection const&, sead::Camera const&, sead::Matrix34<float> const&, sead::Color4f const&, void const*, int) const;
    getEncoding() const;
    sInstance;
};

} 
