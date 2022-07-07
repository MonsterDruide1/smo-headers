#pragma once

class HammerBros
{
public:
    HammerBros(char const*);
    init(al::ActorInitInfo const&);
    listenKill();
    initAfterPlacement();
    tryShoot(bool);
    tryFindShootHammer();
    tryShootLocal(bool, bool);
    tryShootSwing();
    isPlayerHackBros();
    allocateBrosWeapon();
    attach();
    attachAttack();
    control();
    killNoRevive();
};
