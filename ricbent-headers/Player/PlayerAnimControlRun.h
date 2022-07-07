#pragma once

class PlayerAnimControlRun
{
public:
    PlayerAnimControlRun(PlayerAnimator*, PlayerConst const*, IJudge const*, PlayerEffect*, bool);
    reset(float, bool);
    isAnimDashFast() const;
    update(float, sead::Vector3<float> const&);
};
