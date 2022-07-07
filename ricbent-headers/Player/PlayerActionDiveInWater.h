#pragma once

class PlayerActionDiveInWater
{
public:
    PlayerActionDiveInWater(PlayerAnimator*, IPlayerModelChanger const*, PlayerCarryKeeper const*, PlayerJudgeDiveInWater const*);
    tryChangeDiveInWaterAnim();
    judgeEnableDiveInWater() const;
    isDiveInWaterAnim() const;
};
