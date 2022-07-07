#pragma once

class HelpAmiiboNavigateCoinCollect
{
public:
    HelpAmiiboNavigateCoinCollect(HelpAmiiboDirector*, al::LiveActor*);
    initAfterPlacement(al::ActorInitInfo const&);
    isTriggerTouch(al::NfpInfo const&) const;
    activate();
    execute();
    getType() const;
};
