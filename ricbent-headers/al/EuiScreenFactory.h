#pragma once

namespace al { 

class EuiScreenFactory
{
public:
    initialize(sead::Heap*, int);
    createScreen(sead::Heap*, int);
    getScreenName(int) const;
    getScreenNum() const;
    findScreenId(char const*) const;
    assignScreenName(char const*);
    ~EuiScreenFactory();
};

} 
