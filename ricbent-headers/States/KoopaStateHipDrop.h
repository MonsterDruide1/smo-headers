#pragma once

class KoopaStateHipDrop
{
public:
    KoopaStateHipDrop(al::LiveActor*, KoopaFlag*, KoopaRingBeamEmitter*);
    decideEitherFarSidePointAndStart(KoopaLandPointHolder*);
    isAfterHipDropLand() const;
    exeJumpStart();
    exeJump();
    exeHipDropSign();
    exeHipDropStart();
    exeHipDrop();
    exeHipDropLandStart();
    exeHipDropLand();
    exeHipDropLandEnd();
    appear();
    kill();
    ~KoopaStateHipDrop();
};
