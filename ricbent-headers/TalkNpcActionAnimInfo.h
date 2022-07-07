#pragma once

class TalkNpcActionAnimInfo
{
public:
    TalkNpcActionAnimInfo();
    getArgWaitActionName(al::ActorInitInfo const&);
    initWaitActionNameFromPlacementInfo(al::LiveActor const*, al::ActorInitInfo const&, bool);
    initWaitActionNameDirect(al::LiveActor const*, char const*, bool);
    init(al::LiveActor const*, al::ActorInitInfo const&, TalkNpcParam const*, char const*);
    getWaitActionName() const;
    tryGetActorParamSuffix() const;
    tryApplyVisAnim(al::LiveActor*) const;
    convertActionName(sead::BufferedSafeStringBase<char>*, char const*) const;
    changeWaitActionName(char const*, TalkNpcParam const*);
    changeHackWaitActionName(char const*, TalkNpcParam const*);
    onHackWaitActionName(TalkNpcParam const*);
    offHackWaitActionName(TalkNpcParam const*);
    changeWaitActionNameBySwitch(char const*, TalkNpcParam const*);
    resetWaitActionNameBySwitch(TalkNpcParam const*);
    isSelectedInitWaitAction() const;
    getAnyRandomActionName() const;
};
