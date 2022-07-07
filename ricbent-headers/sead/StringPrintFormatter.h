#pragma once

namespace sead { 

class StringPrintFormatter
{
public:
    StringPrintFormatter(sead::BufferedSafeStringBase<char>*);
    StringPrintFormatter(sead::BufferedSafeStringBase<char>*, char const*);
};

} 
