#pragma once

namespace al { 

class ActionFlagCtrl
{
public:
    tryCreate(al::LiveActor*, char const*);
    initPost();
    start(char const*);
    findFlagInfo(char const*) const;
    startCtrlFlag();
    startCtrlSensor();
    update(float, float, float, bool);
    updateCtrlSensor(float, float, float, bool);
    ActionFlagCtrl(al::LiveActor*, char const*);
    isFlagValidOn(int, bool) const;
    isFlagValidOff(int, bool) const;
};

} 
