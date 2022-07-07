#pragma once

class PillarKeyMoveParts
{
public:
    PillarKeyMoveParts(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    updateFinder();
    exeMove();
    exeWait();
    tryPlayHoldSe();
    exeDelay();
};
