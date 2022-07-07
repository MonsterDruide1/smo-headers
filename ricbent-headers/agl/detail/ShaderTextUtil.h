#pragma once

namespace agl { namespace detail { namespace ShaderTextUtil {

replaceMacro(sead::BufferedSafeStringBase<char>*, char const* const*, char const* const*, int, char*, int);
findLineFeedCode(char const*, int*);
replace(char*, char const*, int, int, void*, int);
isUTF8(char const*);
createRawText(sead::SafeStringBase<char> const&, char const* const*, char const* const*, int, bool*, sead::Heap*);
createUniformBufferReplaceText(sead::SafeStringBase<char> const&, sead::Heap*);
createUniformRegisterReplaceText(sead::SafeStringBase<char>**, sead::SafeStringBase<char>**, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::Heap*);
analyzeShaderDumpText(sead::SafeStringBase<char> const&, agl::detail::ShaderTextUtil::ShaderDumpTextAnalyzeResult*);
findFirstChar(char, char const**);
skipChar(char, char const**);
skipFirstMatchedString(sead::SafeStringBase<char> const&, char const**);
matchString(sead::SafeStringBase<char> const&, char const*);
skipString(sead::SafeStringBase<char> const&, char const**);

} } } 
