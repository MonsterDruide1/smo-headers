#pragma once

namespace al { 

class StringMatcher
{
public:
    StringMatcher(al::MatchStr const&);
    tryMatch(char const*);
    getSubStringUnmatched(char const**, char const*);
    resetMatchInfo();
    handleAddMatchInfo(char const*, char const*, void*);
    calcMatchNum() const;
    getMatchedString(sead::BufferedSafeStringBase<char>*, int) const;
    getMatchInfo(int) const;
    addMatchInfo(char const*, char const*);
};

} 
