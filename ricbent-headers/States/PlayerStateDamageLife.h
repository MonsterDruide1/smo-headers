#pragma once

class PlayerStateDamageLife
{
public:
    PlayerStateDamageLife(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, IUsePlayerCeilingCheck const*, PlayerAnimator*, PlayerTrigger*);
    appear();
    isLand() const;
    isEnableCancel() const;
    isFormSquat() const;
    exeDamage();
    exeLand();
    exeDead();
    ~PlayerStateDamageLife();
};
