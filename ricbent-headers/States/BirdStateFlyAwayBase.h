#pragma once

class BirdStateFlyAwayBase
{
public:
    BirdStateFlyAwayBase(char const*, al::LiveActor*);
    initByPlacementInfo(al::ActorInitInfo const&);
    kill();
    startFlyAwayByHomeLanding();
    startFlyAwayByCapGround();
    startFlyAwayByTouchAir();
    startFlyAwayByKoopa();
    isFlyAwayByHomeLanding() const;
    isFlyAwayByCapGround() const;
    isFlyAwayByTouchAir() const;
    isFlyAwayByKoopa() const;
    ~BirdStateFlyAwayBase();
};
