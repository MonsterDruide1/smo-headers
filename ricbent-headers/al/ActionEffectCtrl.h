#pragma once

namespace al { 

class ActionEffectCtrl
{
public:
    tryCreate(al::IUseEffectKeeper*);
    startAction(char const*);
    isKeepSameEffectNext(al::ActionEffectCtrlInfo const*, char const*) const;
    update(float, float, float, bool);
    ActionEffectCtrl(al::IUseEffectKeeper*);
};

} 
