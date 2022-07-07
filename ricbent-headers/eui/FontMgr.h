#pragma once

namespace eui { 

class FontMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    FontMgr();
    ~FontMgr();
    initialize(sead::Heap*, void*, unsigned int, sead::Buffer<char const*> const&, eui::ScalableFontMgr*);
    finalize();
    registFont(nn::ui2d::ResourceAccessor*);
    tryGetFont(sead::SafeStringBase<char> const&) const;
    tryGetFont(sead::SafeStringBase<char> const&);
    getFont(sead::SafeStringBase<char> const&) const;
    getFont(sead::SafeStringBase<char> const&);
    getFontByMessageIndex(unsigned int) const;
    getFontByMessageIndex(unsigned int);
    setRubyFont(sead::SafeStringBase<char> const&);
    setRubyFont(nn::font::Font const*);
    isScalableFont(sead::SafeStringBase<char> const&) const;
    findFontName(sead::BufferedSafeStringBase<char>*, nn::font::Font const*) const;
    sInstance;
};

} 
