#pragma once

namespace nn { namespace font { namespace TextWriterBase<unsigned short> {

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
SetTagProcessor(nn::font::TagProcessorBase<unsigned short>*);
GetTagProcessor() const;
ResetTagProcessor();
CalculateFormatStringWidth(unsigned short const*, ...) const;
CalculateVStringRect(nn::font::Rectangle*, unsigned short const*, std::__va_list) const;
CalculateStringWidth(unsigned short const*) const;
CalculateStringWidth(unsigned short const*, int) const;
StrLen(unsigned short const*);
CalculateStringRect(nn::font::Rectangle*, unsigned short const*, int) const;
CalculateFormatStringHeight(unsigned short const*, ...) const;
CalculateStringHeight(unsigned short const*) const;
CalculateStringHeight(unsigned short const*, int) const;
CalculateFormatStringRect(nn::font::Rectangle*, unsigned short const*, ...) const;
VSNPrintf(unsigned short*, unsigned long, unsigned short const*, std::__va_list);
CalculateStringRect(nn::font::Rectangle*, unsigned short const*) const;
CalculateStringRectImpl(nn::font::Rectangle*, unsigned short const*, int);
FindPosOfWidthLimit(unsigned short const*, int) const;
CalculateLineRectImpl(nn::font::Rectangle*, unsigned short const**, int);
FindPosOfWidthLimit(unsigned short const*) const;
Printf(unsigned short const*, ...);
VPrintf(unsigned short const*, std::__va_list);
Print(unsigned short const*, int);
Print(unsigned short const*);
Print(unsigned short const*, int, int, float const*, float const*);
PrintImpl(unsigned short const*, int, int, float const*, float const*);
VSNPrintf(char*, unsigned long, char const*, std::__va_list);
VSNW16Printf(unsigned short*, unsigned long, unsigned long, unsigned short const*, std::__va_list);
StrLen(char const*);
SetCenterCeilingEnabled(bool);
SetLinefeedKerningEnabled(bool);
CalculateLineWidth(unsigned short const*, int);
AdjustCursor(float*, float*, unsigned short const*, int);
GetLineOffset(int, float const*, int) const;
GetLineWidth(int, float const*, int) const;
IsDrawFlagSet(unsigned int, unsigned int) const;
g_DefaultTagProcessor;

} } } 
