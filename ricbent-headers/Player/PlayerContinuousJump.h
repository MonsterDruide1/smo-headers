#pragma once

class PlayerContinuousJump
{
public:
    PlayerContinuousJump(PlayerConst const*);
    update(bool);
    clear();
    countUp(sead::Vector3<float> const&);
};
