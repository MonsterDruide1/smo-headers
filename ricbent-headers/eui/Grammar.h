#pragma once

namespace eui { namespace Grammar {

setWordAttrFromTag(eui::Grammar::WordAttr*, sead::MessageSet<char16_t>::TagInfo const&);
findWordAttrTag(eui::Grammar::WordAttr*, eui::MessageString const&);
getWordAttrCount(int);
setGenderInfoFromTag(eui::Grammar::GenderInfo*, sead::MessageSet<char16_t>::TagInfo const&);
setCountInfoFromTag(eui::Grammar::CountInfo*, sead::MessageSet<char16_t>::TagInfo const&);
setPatchimInfoFromTag(eui::Grammar::PatchimInfo*, sead::MessageSet<char16_t>::TagInfo const&);
getWordAttrCount(float);
formatNumberWithDelimiter(sead::StringBuilderBase<char>*, unsigned long);
isPatchim(char16_t, bool);
isStringEndWithPatchim(char16_t const*, unsigned int, bool);

} } 
