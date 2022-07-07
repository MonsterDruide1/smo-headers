#pragma once

namespace eui { 

class TagProcessor
{
public:
    TagProcessor(eui::MessageMgr*, eui::FontMgr*);
    Process(unsigned int, nn::font::PrintContext<unsigned short>*);
    CalculateRect(nn::font::Rectangle*, nn::font::PrintContext<unsigned short>*, unsigned int);
    BeginPrint(nn::font::PrintContext<unsigned short>*);
    EndPrint(nn::font::PrintContext<unsigned short>*);
    BeginCalculateRect(nn::font::PrintContext<unsigned short>*);
    EndCalculateRect(nn::font::PrintContext<unsigned short>*);
    preProcess(char16_t*, unsigned int*, unsigned int*, unsigned int, char16_t const*, unsigned int, int, unsigned int, void*);
    calcAdjustTextScale(eui::TextBoxEx*, float, float) const;
    setAlphaTag(char16_t*, bool, unsigned char);
    setPictFontProcessTag(char16_t*, unsigned short);
    setSkipTag(char16_t*, unsigned short);
    setFitWidthTag(char16_t*, unsigned short, float);
    setSizeTag(char16_t*, unsigned short);
    setFontTag(char16_t*, unsigned short);
    preProcessSystemTag_(sead::MessageSet<char16_t>::TagInfo const*, char16_t*, unsigned int*, unsigned int*, unsigned int, char16_t const*, unsigned int, void*);
    preProcessEuiTag_(sead::MessageSet<char16_t>::TagInfo const*, char16_t*, unsigned int*, unsigned int*, unsigned int, char16_t const*, unsigned int, void*);
    preProcessGrammarTag_(sead::MessageSet<char16_t>::TagInfo const*, char16_t*, unsigned int*, unsigned int*, unsigned int, char16_t const*, unsigned int, void*);
    preProcessEuiPictFontTag_(sead::MessageSet<char16_t>::TagInfo const*, char16_t*, unsigned int*, unsigned int*, unsigned int, char16_t const*, unsigned int, void*);
    preProcessAppTag_(sead::MessageSet<char16_t>::TagInfo const*, char16_t*, unsigned int*, unsigned int*, unsigned int, char16_t const*, unsigned int, void*);
    process_(unsigned short, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*);
    processEuiTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    processAppTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    processRubyTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    adjustRubyCursorY(nn::font::TextWriterBase<unsigned short>*, sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*);
    processFontTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    processSizeTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    processColorTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    calcAlphaValueStart_();
    calcAlphaValueEnd_();
    processPageBreakTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    processAlphaTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    processPictFontProcessTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    processSkipTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    processFitWidthTag_(sead::MessageSet<char16_t>::TagInfo const*, nn::font::PrintContext<unsigned short>*, nn::font::Rectangle*, char16_t const*);
    getRubyScale_() const;
    getRubyScaleMax_() const;
    getRubyBaseLinkOffset_() const;
    getRubyCharSpace_() const;
    getPictFontScale_() const;
    getPictFontCodeAndFont_(char16_t*, unsigned short*, unsigned char) const;
    GetRuntimeTypeInfo() const;
    ~TagProcessor();
};

} 
