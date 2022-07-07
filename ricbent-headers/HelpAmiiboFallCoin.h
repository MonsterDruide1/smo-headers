#pragma once

class HelpAmiiboFallCoin
{
public:
    HelpAmiiboFallCoin(HelpAmiiboDirector*, al::LiveActor*);
    initAfterPlacement(al::ActorInitInfo const&);
    isTriggerTouch(al::NfpInfo const&) const;
    isEnableUse();
    activate();
    execute();
    exeWait();
    exeFall();
    getType() const;
    getNerveKeeper() const;
};
