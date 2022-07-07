#pragma once

class KoopaStateHitPunch
{
public:
    KoopaStateHitPunch(al::LiveActor*, KoopaCap*, KoopaFlag*, KoopaNumberCounter*);
    appear();
    exeHitFirst();
    exeHit();
    exeHitEnd();
    ~KoopaStateHitPunch();
};
