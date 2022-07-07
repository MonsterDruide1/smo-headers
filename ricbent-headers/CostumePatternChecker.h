#pragma once

class CostumePatternChecker
{
public:
    CostumePatternChecker();
    checkMatchCostume(bool*, bool*, char const*, char const*, char const*) const;
    tryFindPattern(char const*) const;
    checkMatchCostumePair(char const*, char const*, char const*) const;
};
