#pragma once

class PillarSwitchOpenMapParts
{
public:
    PillarSwitchOpenMapParts(char const*);
    init(al::ActorInitInfo const&);
    open();
    close();
    initAfterPlacement();
    exeWait();
    exeDelayOpen();
    exeOpen();
    exeWaitOpend();
    exeDelayClose();
    exeClose();
};
