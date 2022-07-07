#pragma once

class PlayerStateDamageSwim
{
public:
    PlayerStateDamageSwim(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerTrigger const*, PlayerAnimator*, al::WaterSurfaceFinder const*, PlayerEffect*, IJudge*, IJudge*);
    appear();
    tryReactionWaterIn();
    tryReactionWaterOut();
    isReduceOxygen() const;
    isNoDamageDown() const;
    isEnableCancel() const;
    isEndGround() const;
    isEndInWater() const;
    exeDamageSwim();
    exeDamageSurface();
    exeDamageLandWater();
    exeDead();
    exeEndGround();
    exeEndOutOfWater();
    ~PlayerStateDamageSwim();
};
