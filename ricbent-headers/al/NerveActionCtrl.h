#pragma once

namespace al { 

class NerveActionCtrl
{
public:
    NerveActionCtrl(alNerveFunction::NerveActionCollector*);
    findNerve(char const*) const;
};

} 
