#pragma once

namespace al { 

class NerveKeeper
{
public:
    NerveKeeper(al::IUseNerve*, al::Nerve const*, int);
    update();
    tryChangeNerve();
    setNerve(al::Nerve const*);
    getCurrentNerve() const;
    initNerveAction(al::NerveActionCtrl*);
};

} 
