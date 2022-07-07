#pragma once

namespace sead { 

class PrintFormatter
{
public:
    out<sead::ExpHeap>(sead::ExpHeap const&, char const*, sead::PrintOutput*);
    out<sead::FrameHeap>(sead::FrameHeap const&, char const*, sead::PrintOutput*);
    out<sead::Heap>(sead::Heap const&, char const*, sead::PrintOutput*);
    PrintFormatter(char const*, sead::PrintOutput*);
    flush();
    proceedToFormatMark_(char*);
    flushWithLineBreak();
    operator<<(char const*);
    outputString_(char const*, sead::PrintOutput*, char const*, int);
    outputPtr_(char const*, sead::PrintOutput*, unsigned long);
    out<unsigned char>(unsigned char const&, char const*, sead::PrintOutput*);
    out<unsigned short>(unsigned short const&, char const*, sead::PrintOutput*);
    out<unsigned int>(unsigned int const&, char const*, sead::PrintOutput*);
    out<unsigned long>(unsigned long const&, char const*, sead::PrintOutput*);
    out<signed char>(signed char const&, char const*, sead::PrintOutput*);
    out<short>(short const&, char const*, sead::PrintOutput*);
    out<int>(int const&, char const*, sead::PrintOutput*);
    out<long>(long const&, char const*, sead::PrintOutput*);
    out<float>(float const&, char const*, sead::PrintOutput*);
    out<double>(double const&, char const*, sead::PrintOutput*);
    out<char>(char const&, char const*, sead::PrintOutput*);
    out<bool>(bool const&, char const*, sead::PrintOutput*);
    out<char>(char const*, char const*, sead::PrintOutput*);
    out<char16_t>(char16_t const*, char const*, sead::PrintOutput*);
    out<decltype(nullptr)>(decltype(nullptr) const&, char const*, sead::PrintOutput*);
    out<sead::TickSpan>(sead::TickSpan const&, char const*, sead::PrintOutput*);
    out<sead::Color4f>(sead::Color4f const&, char const*, sead::PrintOutput*);
    out<sead::Color4u8>(sead::Color4u8 const&, char const*, sead::PrintOutput*);
    out<agl::ShaderLocation>(agl::ShaderLocation const&, char const*, sead::PrintOutput*);
    out<sead::SeparateHeap>(sead::SeparateHeap const&, char const*, sead::PrintOutput*);
    out<sead::UnitHeap>(sead::UnitHeap const&, char const*, sead::PrintOutput*);
};

} 
