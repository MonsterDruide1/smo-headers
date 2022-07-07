#pragma once

namespace al { 

class ActionScreenEffectCtrl
{
public:
    ActionScreenEffectCtrl(al::LiveActor const*, char const*);
    tryCreate(al::LiveActor const*, char const*);
    startAction(char const*);
    update(float, float, float, bool);
};

} 
