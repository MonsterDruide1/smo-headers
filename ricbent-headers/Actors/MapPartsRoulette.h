#pragma once

class MapPartsRoulette
{
public:
    MapPartsRoulette(char const*);
    init(al::ActorInitInfo const&);
    tryCreateLinks(al::LiveActor**, al::LiveActor*, bool*, al::ActorInitInfo const&, char const*, int);
    stop();
    roulette();
    exeStop();
    exeRoulette();
};
