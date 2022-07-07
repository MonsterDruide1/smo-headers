#pragma once

class KoopaStateFireBeam
{
public:
    KoopaStateFireBeam(al::LiveActor*, al::ActorInitInfo const&, KoopaNumberCounter const*, KoopaFlag*, KoopaWeaponHolder*, KoopaLandPointHolder*);
    appear();
    kill();
    control();
    exeFireBeamSignFirst();
    exeFireBeamSignTurn();
    exeFireBeamSign();
    exeFireBeamStart();
    exeFireBeam();
    exeFireBeamTurnSign();
    exeFireBeamTurn();
    exeFireBeamEnd();
    exeFireBeamAfterJump();
    exeFireBeamAfterAngry();
    ~KoopaStateFireBeam();
};
