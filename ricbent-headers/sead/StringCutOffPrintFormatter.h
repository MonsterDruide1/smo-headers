#pragma once

namespace sead { 

class StringCutOffPrintFormatter
{
public:
    StringCutOffPrintFormatter(sead::BufferedSafeStringBase<char>*);
    StringCutOffPrintFormatter(sead::BufferedSafeStringBase<char>*, char const*);
};

} 
