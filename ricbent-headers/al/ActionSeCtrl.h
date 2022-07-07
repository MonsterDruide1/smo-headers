#pragma once

namespace al { 

class ActionSeCtrl
{
public:
    tryCreate(al::AudioKeeper*);
    ActionSeCtrl(al::SeKeeper*, al::SeUserInfo const*);
    init();
    resetAction(bool);
    restartAction();
    startAction(char const*);
    checkAndPlayStart(float, float, float, bool);
    update(float, float, float, bool);
    resetState();
};

} 
