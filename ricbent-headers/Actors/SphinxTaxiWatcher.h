#pragma once

class SphinxTaxiWatcher
{
public:
    SphinxTaxiWatcher(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    exeWait();
    exePlayerBind();
};
