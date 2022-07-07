#pragma once

namespace al { 

class ActionAnimCtrl
{
public:
    tryCreate(al::LiveActor*, al::ActorResource const*, char const*, char const*);
    init(al::ActorResource const*, char const*, char const*);
    start(char const*);
    findAnimInfo(char const*) const;
    getFrame() const;
    getActionFrameMax(char const*) const;
    getFrameRate() const;
    trySetFrame(float);
    isExistAction(char const*) const;
    isActionOneTime(char const*) const;
    isActionEnd() const;
    getPlayingActionName() const;
    ActionAnimCtrl(al::LiveActor*);
    sortCtrlInfo();
};

} 
