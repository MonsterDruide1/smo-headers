#pragma once

class RiseMapPartsOld
{
public:
    RiseMapPartsOld(char const*);
    init(al::ActorInitInfo const&);
    startRise();
    initAfterPlacement();
    exeWait();
    exeMove();
    exeStop();
};
