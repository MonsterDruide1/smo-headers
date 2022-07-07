#pragma once

namespace al { 

class MessageHolder
{
public:
    MessageHolder();
    ~MessageHolder();
    init(char const*, char const*);
    getText(int) const;
    getText(char const*) const;
    tryGetText(char const*) const;
    isExistText(char const*) const;
    calcCharacterNum(int) const;
    calcCharacterNum(char const*) const;
    calcCharacterByteSize(char const*) const;
    getTextNum() const;
    searchTextLabelByIndex(sead::BufferedSafeStringBase<char>*, int) const;
    getStyleByIndex(int) const;
    trySearchStyleIndexByLabel(char const*) const;
};

} 
