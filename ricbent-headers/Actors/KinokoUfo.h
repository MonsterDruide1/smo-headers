#pragma once

class KinokoUfo
{
public:
    KinokoUfo(char const*);
    init(al::ActorInitInfo const&);
    listenClose();
    listenOpen();
    initAfterPlacement();
};
