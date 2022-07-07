#pragma once

class CostumePattern
{
public:
    CostumePattern();
    init(al::ByamlIter const&);
    checkMatchCostume(bool*, bool*, char const*, char const*) const;
    isMatchCostume(char const*) const;
    isIgnoreCostume(char const*) const;
    checkMatchCostumePair(char const*, char const*) const;
};
