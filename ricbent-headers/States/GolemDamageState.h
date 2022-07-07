#pragma once

class GolemDamageState
{
public:
    GolemDamageState(IUseGolemState*);
    appear();
    exeDamage();
    exeDamageLoop();
    ~GolemDamageState();
};
