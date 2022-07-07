#pragma once

namespace al { namespace ReplaceTagProcessorBase {

replacePictureGroup(char16_t*, al::MessageTag const&) const;
replaceNumberGroup(char16_t*, al::MessageTag const&, std::__va_list) const;
replaceStringGroup(char16_t*, al::MessageTag const&, std::__va_list) const;
replaceTagLabel(char16_t*, al::MessageTag const&) const;
replace(char16_t*, al::IUseMessageSystem const*, char16_t const*) const;
replaceArgs(char16_t*, int, al::IUseMessageSystem const*, char16_t const*, ...) const;
replaceArgsVaList(char16_t*, al::IUseMessageSystem const*, char16_t const*, std::__va_list) const;
replaceNamedString(sead::BufferedSafeStringBase<char16_t>*, al::IUseMessageSystem const*, char16_t const*, char16_t const*, char const*) const;
replaceScore(sead::BufferedSafeStringBase<char16_t>*, al::IUseMessageSystem const*, int, char16_t const*, char const*) const;
replaceCoinNum(sead::BufferedSafeStringBase<char16_t>*, al::IUseMessageSystem const*, int, char16_t const*, char const*) const;
replaceUserName(sead::BufferedSafeStringBase<char16_t>*, al::IUseMessageSystem const*, char16_t const*, char16_t const*, char const*) const;
replaceAmiiboName(sead::BufferedSafeStringBase<char16_t>*, al::IUseMessageSystem const*, char const*, char16_t const*, char const*) const;
replaceTime(sead::BufferedSafeStringBase<char16_t>*, al::IUseMessageSystem const*, char16_t const*, char const*, al::ReplaceTimeInfo const&) const;
replaceTimeImpl(char16_t*, al::IUseMessageSystem const*, char16_t const*, al::ReplaceTimeInfo const&) const;
replaceProjectTag(char16_t*, al::MessageTag const&, al::IUseMessageSystem const*) const;

} } 
