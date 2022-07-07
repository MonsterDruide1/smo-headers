#pragma once

class ImomuAttackPartialAnimCtrl
{
public:
    ImomuAttackPartialAnimCtrl(al::LiveActor*);
    tryStartAttack();
    tryStartAttackCore(float);
    tryStartAttackEnemy();
    update();
    forceClear();
};
