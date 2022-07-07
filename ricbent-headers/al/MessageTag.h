#pragma once

namespace al { 

class MessageTag
{
public:
    MessageTag(nn::font::PrintContext<unsigned short> const*);
    MessageTag(char16_t const*);
    getSkipLength() const;
    getParam8(int) const;
    getParam16(int) const;
    getParam32(int) const;
    getParamPtr(int) const;
};

} 
