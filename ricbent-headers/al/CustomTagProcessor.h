#pragma once

namespace al { 

class CustomTagProcessor
{
public:
    CustomTagProcessor(eui::MessageMgr*, eui::FontMgr*, al::MessageSystem const*);
    processAppTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    getPadStyleType(int);
    getPadPairType();
    preProcessAppTag_(sead::MessageSet<char16_t>::TagInfo const*, char16_t*, unsigned int*, unsigned int*, unsigned int, char16_t const*, unsigned int, void*);
    getPadStyleMessage(al::IUseMessageSystem const*, sead::MessageSet<char16_t>::TagInfo const*, int);
    getPadPairMessage(al::IUseMessageSystem const*, sead::MessageSet<char16_t>::TagInfo const*, int);
    processPictFontProcessTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    ~CustomTagProcessor();
    getRubyScale_() const;
    getRubyBaseLinkOffset_() const;
    getRubyCharSpace_() const;
    getPictFontScale_() const;
    getMessageSystem() const;
};

} 
