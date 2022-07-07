#pragma once

namespace eui { 

class LetterAnimControl
{
public:
    getClassName() const;
    LetterAnimControl();
    LetterAnimControl(eui::LetterAnimControl const&, eui::LayoutEx*, sead::Heap*);
    reset();
    initialize(sead::Heap*, eui::TextBoxEx*, eui::LayoutEx*);
    setAppTagCallback(sead::IDelegate1<sead::MessageSet<char16_t>::TagInfo const*>*);
    setChoiceExcludeCallback(sead::IDelegate2R<char16_t const*, unsigned short, bool>*);
    Update(float);
    finishAnim_();
    start();
    setSpeed(float);
    setSpeedTemporarily(float);
    stop();
    flush();
    flushAllowWait();
    changeText(char16_t const*, unsigned short, unsigned int);
    changeText(eui::MessageString const&, unsigned int);
    GetRuntimeTypeInfo() const;
    ~LetterAnimControl();
};

} 
