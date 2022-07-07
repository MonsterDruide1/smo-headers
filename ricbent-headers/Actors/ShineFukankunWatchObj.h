#pragma once

class ShineFukankunWatchObj
{
public:
    ShineFukankunWatchObj(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    exeWait();
};
