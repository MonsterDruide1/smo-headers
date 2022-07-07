#pragma once

namespace al { 

class NerveStateCtrl
{
public:
    NerveStateCtrl(int);
    addState(al::NerveStateBase*, al::Nerve const*, char const*);
    updateCurrentState();
    startState(al::Nerve const*);
    findStateInfo(al::Nerve const*);
    isCurrentStateEnd() const;
    tryEndCurrentState();
};

} 
