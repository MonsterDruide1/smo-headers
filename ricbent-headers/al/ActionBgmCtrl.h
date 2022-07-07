#pragma once

namespace al { 

class ActionBgmCtrl
{
public:
    tryCreate(al::AudioKeeper*);
    ActionBgmCtrl(al::AudioKeeper*, al::BgmUserInfo const*);
    startAction(char const*);
    update(float, float, float, bool);
    getAudioKeeper() const;
};

} 
