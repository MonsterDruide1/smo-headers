#pragma once

namespace eui { 

class TextBoxEx
{
public:
    GetRuntimeTypeInfoStatic();
    TextBoxEx();
    TextBoxEx(nn::ui2d::ResTextBox const*, nn::ui2d::ResTextBox const*, nn::ui2d::BuildArgSet const&, nn::ui2d::TextBox::InitializeStringParam*);
    TextBoxEx(eui::TextBoxEx const&, eui::LayoutEx*);
    TextBoxEx(eui::TextBoxEx const&, unsigned short, eui::LayoutEx*);
    InitializeString(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::BuildArgSet const&, nn::ui2d::TextBox::InitializeStringParam const&);
    setMessageString(eui::MessageString const&, void*);
    setMessageStringWithPage(eui::MessageString const&, bool*, unsigned int, bool, void*);
    SetString(unsigned short const*, unsigned short);
    SetString(unsigned short const*, unsigned short, unsigned short);
    setStringWithPage(char16_t const*, unsigned short, bool*, unsigned int, bool, void*);
    setStringNoPreproces(char16_t const*, unsigned short);
    getLineLimit() const;
    processAppTag(sead::IDelegate1<sead::MessageSet<char16_t>::TagInfo const*>*);
    InitializeStringWithTextSearcherInfo(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::BuildArgSet const&, nn::ui2d::TextSearcher::TextInfo const&);
    getCharNumLimitInLine_();
    isTemplateTextInvalid() const;
    setTextOverWarningMargin(float);
    doSetString_(char16_t const*, unsigned short, bool*, int, bool, void*);
    getDispStringBufferCharCountMax_() const;
    doPreprocess_(sead::BufferedSafeStringBase<char16_t>*, unsigned int*, unsigned int*, char16_t const*, unsigned int, int, void*);
    adjustText_(eui::LayoutEx*);
    calcStringWidth_();
    isNeedStringWidthSizeOverCheck_() const;
    getTextAdjustMinScale_(float*);
    isWordwrapOn_();
    isTextChangeOn_() const;
    getLetterAnimSpeed_(float*);
    createLetterAnimControl_(nn::util::IntrusiveList<eui::ControlBase, nn::util::IntrusiveListMemberNodeTraits<eui::ControlBase, &eui::ControlBase::m_Link, eui::ControlBase> >*, eui::LayoutEx*);
    ~TextBoxEx();
    GetRuntimeTypeInfo() const;
};

} 
