#pragma once

namespace nn { namespace nex { 

class CommandLineParser
{
public:
    ~CommandLineParser();
    Release();
    Parse(char**, int);
    Parse(char const*);
    CmdLineToArgV(char*, char**&, int*);
    FreeArgV(char**, int);
    CountArguments(char*, unsigned long);
    ExtractArguments(char*, unsigned long, char**);
    GetOptionName(unsigned long);
    GetNbOptions();
    IsSet(char const*);
    FindOption(char const*);
    GetOptionArguments(char const*);
    GetOptionArguments(unsigned long);
};

} } 
