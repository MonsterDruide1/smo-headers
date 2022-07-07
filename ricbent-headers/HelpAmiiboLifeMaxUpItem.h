#pragma once

class HelpAmiiboLifeMaxUpItem
{
public:
    HelpAmiiboLifeMaxUpItem(HelpAmiiboDirector*, al::LiveActor*);
    initAfterPlacement(al::ActorInitInfo const&);
    isTriggerTouch(al::NfpInfo const&) const;
    isEnableUse();
    activate();
    execute();
    getType() const;
};
