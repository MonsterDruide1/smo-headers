#pragma once

class HelpAmiiboExecutor
{
public:
    HelpAmiiboExecutor(HelpAmiiboDirector*, al::LiveActor*, char const*);
    initAfterPlacement(al::ActorInitInfo const&);
    tryTouch(al::NfpInfo const&);
    tryExecute();
    activate();
    deactivate();
};
