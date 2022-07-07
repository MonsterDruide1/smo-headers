#pragma once

class TalkMessageInfoMessageParam
{
public:
    TalkMessageInfoMessageParam(al::IUseMessageSystem const*, char16_t const*, char const*);
    setting(al::IUseMessageSystem const*, char16_t const*);
    getCharNum(int) const;
};
