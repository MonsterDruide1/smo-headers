#pragma once

namespace al { 

class AnimInfoTable
{
public:
    AnimInfoTable(int);
    add(char const*, void*, float, bool);
    findAnimInfo(char const*) const;
    tryFindAnimInfo(char const*) const;
    sort();
};

} 
