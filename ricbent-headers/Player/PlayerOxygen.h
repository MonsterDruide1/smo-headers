#pragma once

class PlayerOxygen
{
public:
    PlayerOxygen();
    setup(int, int, int, int);
    reset();
    reduce();
    recovery();
    isTriggerDamage() const;
};
