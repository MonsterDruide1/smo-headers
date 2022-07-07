#pragma once

namespace nn { namespace nex { 

class StringConverter
{
public:
    StringConverter(unsigned long);
    ~StringConverter();
    Encode(char const*, bool);
    Decode(char*, unsigned short, bool);
    LimitString(unsigned short);
    GetBuffer();
    GetBufferSize();
};

} } 
