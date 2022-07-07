#pragma once

class FireBros
{
public:
    FireBros(char const*);
    init(al::ActorInitInfo const&);
    listenAppear();
    tryShoot(bool);
    tryShootSwing();
    attackFront(al::HitSensor*, al::HitSensor*);
    control();
    isPlayerHackBros();
    isEnableAttackWeapon(bool) const;
    allocateBrosWeapon();
};
