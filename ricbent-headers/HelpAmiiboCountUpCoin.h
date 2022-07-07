#pragma once

class HelpAmiiboCountUpCoin
{
public:
    HelpAmiiboCountUpCoin(HelpAmiiboDirector*, al::LiveActor*);
    initAfterPlacement(al::ActorInitInfo const&);
    isTriggerTouch(al::NfpInfo const&) const;
    isEnableUse();
    activate();
    execute();
    exeEnd();
    exeDelay();
    exeAppearCoin();
    updateItemQT(al::LiveActor*);
    getType() const;
    getNerveKeeper() const;
};
