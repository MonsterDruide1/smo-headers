#pragma once

class Coin2DCityDirector
{
public:
    Coin2DCityDirector(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    registerCoin(Coin2DCity*);
    getCoin();
    isTriggerBeat() const;
    exeWait();
};
