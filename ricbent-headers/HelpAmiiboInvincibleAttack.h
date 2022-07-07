#pragma once

class HelpAmiiboInvincibleAttack
{
public:
    HelpAmiiboInvincibleAttack(HelpAmiiboDirector*, al::LiveActor*);
    initAfterPlacement(al::ActorInitInfo const&);
    isTriggerTouch(al::NfpInfo const&) const;
    activate();
    execute();
    getType() const;
};
