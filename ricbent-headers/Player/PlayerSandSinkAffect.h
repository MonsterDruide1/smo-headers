#pragma once

class PlayerSandSinkAffect
{
public:
    PlayerSandSinkAffect(al::LiveActor const*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision*, PlayerEffect*);
    clear();
    isSink() const;
    update(bool);
    isSinkDeathHeight() const;
    reduceVelocity(sead::Vector3<float>*);
    isEnableCapThrow() const;
    calcSandSinkDeathRate() const;
};
