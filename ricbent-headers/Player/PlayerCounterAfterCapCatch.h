#pragma once

class PlayerCounterAfterCapCatch
{
public:
    PlayerCounterAfterCapCatch(PlayerConst const*, PlayerTrigger const*);
    update(PlayerTrigger const*);
    isCapCatch() const;
};
