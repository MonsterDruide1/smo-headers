#pragma once

class HelpAmiiboPlayerInvincible
{
public:
    HelpAmiiboPlayerInvincible(HelpAmiiboDirector*, al::LiveActor*);
    isTriggerTouch(al::NfpInfo const&) const;
    isEnableUse();
    execute();
    getType() const;
};
