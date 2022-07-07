#pragma once

class KoopaShipDemoRequester
{
public:
    KoopaShipDemoRequester(KoopaShip*);
    startKoopaShipDemoHomeFlyAway();
    isEnableStartWipeKoopaShipDemoHomeFlyAway() const;
    isEnableEndKoopaShipDemoHomeFlyAway() const;
    endKoopaShipDemoHomeFlyAway();
    getSceneObjName() const;
    ~KoopaShipDemoRequester();
};
