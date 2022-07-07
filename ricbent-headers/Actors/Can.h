#pragma once

class Can
{
public:
    Can(char const*);
    init(al::ActorInitInfo const&);
    appear();
    startHack(IUsePlayerHack*);
    shoot();
    getReflection() const;
    getFriction() const;
    control();
    exeHide();
    exeThrow();
    checkLand(sead::Vector3<float>*, sead::Vector3<float>*);
    swingThrow();
    exeLand();
    exeWait();
    exeShake();
    isChargeCount() const;
    exeCharge();
    swingChargeThrow();
    exeTrash();
    attackSensor(al::HitSensor*, al::HitSensor*);
};
