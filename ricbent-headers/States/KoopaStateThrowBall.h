#pragma once

class KoopaStateThrowBall
{
public:
    KoopaStateThrowBall(al::LiveActor*, KoopaFlag*, KoopaNumberCounter*, KoopaWeaponHolder const*, KoopaJointCtrlHolder*);
    appear();
    kill();
    exeThrowSign();
    exeThrowStart();
    exeThrow();
    exeThrowSwitchLR();
    exeThrowEnd();
    exeThrowLastEnd();
    exeThrowAfterWait();
    exeThrowAfterEnd();
    exeThrowSkipEnd();
    ~KoopaStateThrowBall();
};
