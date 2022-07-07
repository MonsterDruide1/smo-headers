#pragma once

namespace eui { 

class MessageSet
{
public:
    MessageSet();
    findMessage(char const*) const;
    tryFindMessage(char const*) const;
    findMessageByIndex(int) const;
    tryFindMessageByIndex(int) const;
    hasMessageByIndex(int) const;
    hasMessage(char const*) const;
    calcMessageLength(char const*) const;
    calcMessageLengthByIndex(int) const;
    ~MessageSet();
};

} 
