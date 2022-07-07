#pragma once

namespace al { 

class LayoutSystem
{
public:
    LayoutSystem();
    init();
    initGraphicsResource();
    initFont();
    initEui();
    tryFindFont(char const*) const;
    getFontNamePair(int) const;
    prepareInitFontForChangeLanguage();
    initFontForChangeLanguage();
    reinitFont(sead::Heap*);
    beginDraw() const;
    endDraw() const;
};

} 
