#pragma once

namespace nn { namespace font { namespace TagProcessorBase<char> {

GetRuntimeTypeInfoStatic();
GetRuntimeTypeInfo() const;
TagProcessorBase();
~TagProcessorBase();
Process(unsigned int, nn::font::PrintContext<char>*);
ProcessLinefeed(nn::font::PrintContext<char>*) const;
ProcessTab(nn::font::PrintContext<char>*) const;
CalculateRect(nn::font::Rectangle*, nn::font::PrintContext<char>*, unsigned int);
BeginPrint(nn::font::PrintContext<char>*);
EndPrint(nn::font::PrintContext<char>*);
BeginCalculateRect(nn::font::PrintContext<char>*);
EndCalculateRect(nn::font::PrintContext<char>*);

} } } 
