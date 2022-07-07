#pragma once

class KoopaStateAttackSpinShell
{
public:
    KoopaStateAttackSpinShell(al::LiveActor*, KoopaShell*);
    startOnGround();
    startRecover();
    exeAttackShellStart();
    exeAttackShell();
    exeAttackShellEnd();
    appear();
    ~KoopaStateAttackSpinShell();
};
