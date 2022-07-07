#pragma once

namespace al { 

class NerveExecutor
{
public:
    getNerveKeeper() const;
    NerveExecutor(char const*);
    ~NerveExecutor();
    initNerve(al::Nerve const*, int);
    updateNerve();
};

} 
