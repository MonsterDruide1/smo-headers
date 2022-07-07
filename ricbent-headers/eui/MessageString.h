#pragma once

namespace eui { 

class MessageString
{
public:
    MessageString();
    MessageString(int, char16_t const*);
    MessageString(char16_t const*, char16_t const*);
    MessageString(sead::SafeStringBase<char16_t> const&);
    MessageString(eui::MessageString const&);
    operator=(eui::MessageString const&);
    operator[](int) const;
    begin() const;
    end() const;
    toIterator(int) const;
    tryMakeTagStrippedString(sead::BufferedSafeStringBase<char16_t>*) const;
};

} 
