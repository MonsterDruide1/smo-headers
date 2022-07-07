#pragma once

namespace sead { 

class DebugFontMgrJis1Nvn
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    DebugFontMgrJis1Nvn();
    ~DebugFontMgrJis1Nvn();
    initialize(sead::Heap*, char const*, char const*, char const*, unsigned int);
    initializeFromBinary(sead::Heap*, void*, unsigned long, void*, unsigned long, void const*, unsigned int);
    swapUniformBlockBuffer();
    getHeight() const;
    getWidth() const;
    getCharWidth(char16_t) const;
    getMaxDrawNum() const;
    begin(sead::DrawContext*) const;
    end(sead::DrawContext*) const;
    print(sead::DrawContext*, sead::Projection const&, sead::Camera const&, sead::Matrix34<float> const&, sead::Color4f const&, void const*, int) const;
    searchCharIndexFormCharCode_(unsigned int) const;
    getEncoding() const;
    sInstance;
};

} 
