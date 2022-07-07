#pragma once

namespace nn { namespace font { namespace TagProcessorBase<unsigned short> {

GetRuntimeTypeInfoStatic();
GetRuntimeTypeInfo() const;
TagProcessorBase();
~TagProcessorBase();
Process(unsigned int, nn::font::PrintContext<unsigned short>*);
ProcessLinefeed(nn::font::PrintContext<unsigned short>*) const;
ProcessTab(nn::font::PrintContext<unsigned short>*) const;
CalculateRect(nn::font::Rectangle*, nn::font::PrintContext<unsigned short>*, unsigned int);
BeginPrint(nn::font::PrintContext<unsigned short>*);
EndPrint(nn::font::PrintContext<unsigned short>*);
BeginCalculateRect(nn::font::PrintContext<unsigned short>*);
EndCalculateRect(nn::font::PrintContext<unsigned short>*);

} } } 
