#pragma once

class PlayerCounterQuickTurnJump
{
public:
    PlayerCounterQuickTurnJump(PlayerConst const*, PlayerTrigger const*);
    update();
    isEnableTurnJump() const;
};
