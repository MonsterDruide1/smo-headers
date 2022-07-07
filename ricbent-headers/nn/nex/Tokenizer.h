#pragma once

namespace nn { namespace nex { 

class Tokenizer
{
public:
    Tokenizer(char const*, char);
    Tokenize(char const*, char const*);
    Tokenizer(char const*, char const*);
    ~Tokenizer();
    FindNextNonDelim(char const*, char const*, unsigned long);
    AssignToken(char const*, unsigned long);
    operator[](unsigned int const&);
    Trace(unsigned long);
};

} } 
