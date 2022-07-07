#pragma once

namespace eui { 

class ScalableFontMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    ScalableFontMgr();
    ~ScalableFontMgr();
    initialize(eui::ScalableFontMgr::InitializeArg const&);
    update();
    registFont(nn::ui2d::ResourceAccessor*);
    getFont(sead::SafeStringBase<char> const&) const;
    getFont(sead::SafeStringBase<char> const&);
    isGlyphsReady(char16_t const*, unsigned int, nn::font::ScalableFont const*, eui::FontMgr const*);
    registerGlyphs_(char16_t const*, unsigned int, nn::font::ScalableFont const*, eui::FontMgr const*, int, bool);
    registerGlyphs(char16_t const*, unsigned int, nn::font::ScalableFont const*, eui::FontMgr const*, int);
    findFontName(nn::font::ScalableFont const*) const;
    reserveRegisterGlyphs(eui::ScalableFontTextBoxEx*);
    dumpTextureCacheGlyphTreeMap() const;
    getTextureCacheNoSpaceError() const;
    clearNoSpaceError();
    isNeedPlot_(char16_t, unsigned int, unsigned short);
    sInstance;
};

} 
