#pragma once

class HelpAmiiboYoshi
{
public:
    HelpAmiiboYoshi(HelpAmiiboDirector*, al::LiveActor*);
    initAfterPlacement(al::ActorInitInfo const&);
    isTriggerTouch(al::NfpInfo const&) const;
    activate();
    execute();
    getType() const;
};
