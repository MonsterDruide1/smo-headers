#pragma once

namespace nn { namespace font { namespace TextWriterBase<char> {

TextWriterBase();
~TextWriterBase();
SetLineSpace(float);
GetLineSpace() const;
SetLineHeight(float);
GetLineHeight() const;
SetCharSpace(float);
GetCharSpace() const;
SetWidthLimitOffset(float);
GetWidthLimitOffset() const;
SetTabWidth(int);
GetTabWidth() const;
SetWidthLimit(float);
GetWidthLimit() const;
ResetWidthLimit();
SetDrawFlag(unsigned int);
GetDrawFlag() const;
SetTagProcessor(nn::font::TagProcessorBase<char>*);
GetTagProcessor() const;
ResetTagProcessor();
CalculateFormatStringWidth(char const*, ...) const;
CalculateVStringRect(nn::font::Rectangle*, char const*, std::__va_list) const;
CalculateStringWidth(char const*) const;
CalculateStringWidth(char const*, int) const;
StrLen(char const*);
CalculateStringRect(nn::font::Rectangle*, char const*, int) const;
CalculateFormatStringHeight(char const*, ...) const;
CalculateStringHeight(char const*) const;
CalculateStringHeight(char const*, int) const;
CalculateFormatStringRect(nn::font::Rectangle*, char const*, ...) const;
VSNPrintf(char*, unsigned long, char const*, std::__va_list);
CalculateStringRect(nn::font::Rectangle*, char const*) const;
CalculateStringRectImpl(nn::font::Rectangle*, char const*, int);
FindPosOfWidthLimit(char const*, int) const;
CalculateLineRectImpl(nn::font::Rectangle*, char const**, int);
FindPosOfWidthLimit(char const*) const;
Printf(char const*, ...);
VPrintf(char const*, std::__va_list);
Print(char const*, int);
Print(char const*);
Print(char const*, int, int, float const*, float const*);
PrintImpl(char const*, int, int, float const*, float const*);
VSNPrintf(unsigned short*, unsigned long, unsigned short const*, std::__va_list);
VSNW16Printf(unsigned short*, unsigned long, unsigned long, unsigned short const*, std::__va_list);
StrLen(unsigned short const*);
SetCenterCeilingEnabled(bool);
SetLinefeedKerningEnabled(bool);
CalculateLineWidth(char const*, int);
AdjustCursor(float*, float*, char const*, int);
GetLineOffset(int, float const*, int) const;
GetLineWidth(int, float const*, int) const;
IsDrawFlagSet(unsigned int, unsigned int) const;
g_DefaultTagProcessor;

} } } 
