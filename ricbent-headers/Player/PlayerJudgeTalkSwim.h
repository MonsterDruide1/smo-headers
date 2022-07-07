#pragma once

class PlayerJudgeTalkSwim
{
public:
    PlayerJudgeTalkSwim(PlayerHackKeeper const*, PlayerCarryKeeper const*, PlayerStateSwim const*);
    judge() const;
    reset();
    update();
};
